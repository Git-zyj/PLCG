/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116325
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
    for (signed char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) + (arr_0 [(unsigned char)4] [(unsigned char)16])))) ? (((/* implicit */int) ((((/* implicit */int) ((signed char) (unsigned char)16))) != (((/* implicit */int) ((_Bool) (unsigned char)0)))))) : (((/* implicit */int) arr_2 [(unsigned char)12])))))));
                var_12 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)111)))) + (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) 693878730254491206LL))))), ((unsigned short)65535))))));
                var_13 = ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27209)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_0 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)10753), (((/* implicit */unsigned short) arr_1 [i_0])))))) : (arr_0 [i_0] [i_0]));
                var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) arr_0 [i_0] [i_0 - 2])))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            {
                var_16 = min((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [13U])) & (((/* implicit */int) var_1))))), (((arr_3 [i_3] [i_2]) >> (((((/* implicit */int) min((((/* implicit */signed char) var_2)), (arr_2 [i_2])))) + (35))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) (unsigned char)105)))))))))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_12 [i_2] [i_2] [i_2] [i_2]), ((signed char)7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [(signed char)1] [i_3] [(signed char)1]))) : (min((((/* implicit */unsigned int) var_10)), (var_7)))))) - (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)7092))))) : ((~(502673202931457043ULL)))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_8 [i_2]))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_9);
    var_21 ^= ((/* implicit */long long int) var_6);
}
