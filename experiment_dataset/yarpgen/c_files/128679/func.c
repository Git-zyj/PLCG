/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128679
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_6 [i_1] |= ((/* implicit */unsigned char) (signed char)0);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            arr_11 [i_1] [i_1] [(unsigned short)0] [i_1] |= ((signed char) (signed char)87);
                            var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_2 + 2]))) : (28U)))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)175)) << (((((/* implicit */int) arr_9 [i_2 + 1] [i_2 - 2] [i_2 + 2] [i_2 - 2])) - (42)))))));
                            var_20 = max((((/* implicit */int) ((short) -8077231974493804191LL))), (404793953));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        for (short i_5 = 1; i_5 < 15; i_5 += 1) 
        {
            {
                var_21 = min((((((/* implicit */int) (signed char)-88)) == (812574767))), (((((/* implicit */int) (unsigned short)23608)) < (((/* implicit */int) (signed char)-88)))));
                var_22 ^= 1374394665;
                arr_17 [i_5] = ((/* implicit */long long int) ((min((((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (unsigned short)30)))), (((/* implicit */int) arr_14 [i_4] [i_5])))) / (((/* implicit */int) (signed char)27))));
                /* LoopNest 2 */
                for (signed char i_6 = 1; i_6 < 14; i_6 += 2) 
                {
                    for (unsigned short i_7 = 1; i_7 < 17; i_7 += 3) 
                    {
                        {
                            arr_22 [i_5] [(_Bool)1] [i_7] = ((/* implicit */signed char) 650063846U);
                            arr_23 [i_5] [i_5] [i_5 - 1] [(unsigned short)6] = ((/* implicit */unsigned short) (((-(((/* implicit */int) ((((/* implicit */int) arr_15 [i_4])) <= (-225565611)))))) * ((~(((/* implicit */int) ((unsigned short) (unsigned short)46689)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
