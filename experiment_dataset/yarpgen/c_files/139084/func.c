/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139084
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-29)) + (((/* implicit */int) var_11))))) ? (((((/* implicit */unsigned long long int) -1487615135)) * (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [(unsigned short)17])))))))));
                            var_20 ^= ((/* implicit */signed char) max((15LL), (((/* implicit */long long int) ((((((/* implicit */_Bool) 8388607ULL)) ? (((/* implicit */int) (short)-8534)) : (((/* implicit */int) (short)-1)))) > (((/* implicit */int) var_3)))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [6] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) > ((-(max((3U), (((/* implicit */unsigned int) arr_8 [i_0] [(signed char)14]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((signed char) 4294967293U));
                arr_19 [3] [14] [(unsigned char)4] = ((((/* implicit */_Bool) min((((4294967283U) ^ (3U))), ((-(2400729923U)))))) ? (min((((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))), ((~(var_16))))) : (min((((/* implicit */unsigned int) ((_Bool) 18U))), (4294967283U))));
                var_22 = ((/* implicit */unsigned short) arr_11 [i_4] [(signed char)2]);
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 14; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) ((signed char) (-(16589678021057552480ULL))))) ^ (((/* implicit */int) arr_5 [(short)3])))))));
                            arr_27 [i_6] [(signed char)1] [10ULL] [i_4] = ((/* implicit */unsigned char) (short)-25666);
                            var_24 = ((/* implicit */long long int) (~(arr_17 [(unsigned short)13] [2])));
                        }
                    } 
                } 
                arr_28 [i_4] = ((max((arr_25 [i_5] [(unsigned char)10] [i_5]), (((/* implicit */unsigned int) min((var_5), (((/* implicit */unsigned short) arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] [i_5]))))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_15))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) var_13);
}
