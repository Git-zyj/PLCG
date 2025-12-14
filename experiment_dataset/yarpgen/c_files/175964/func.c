/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175964
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
    var_12 *= ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_4))) < (((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_2] [i_1 + 3] [i_0] [i_0] = arr_9 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3];
                        arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (short)-12);
                    }
                    arr_14 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (unsigned short)49859);
                    var_13 = ((/* implicit */unsigned int) min((var_13), (max((((/* implicit */unsigned int) (-(((((/* implicit */int) (short)-3842)) / (((/* implicit */int) (unsigned short)14529))))))), ((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1 + 1] [i_2] [(unsigned short)6]))) * (757589727U)))))))));
                    var_14 = ((/* implicit */unsigned char) ((var_1) ? (((/* implicit */int) arr_6 [i_2] [(unsigned short)5] [i_1] [(unsigned short)5])) : ((+(((/* implicit */int) min((arr_7 [i_0] [i_0] [i_2]), (((/* implicit */short) arr_3 [i_2])))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) (((+((+(((/* implicit */int) (short)12288)))))) & (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8))))))))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        for (short i_5 = 1; i_5 < 12; i_5 += 4) 
        {
            {
                var_16 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (((-(((/* implicit */int) arr_15 [i_4] [i_4])))) | (((((/* implicit */int) (unsigned short)5768)) + (((/* implicit */int) var_3)))))))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        {
                            var_17 ^= ((/* implicit */int) min((((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)81))) + (2566577374U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 324584113U)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-61)))))) ? (((/* implicit */int) arr_15 [i_4] [i_5 - 1])) : ((-(((/* implicit */int) arr_10 [i_4] [i_5] [15ULL] [i_7])))))))));
                            arr_25 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */int) (unsigned short)57007);
                        }
                    } 
                } 
            }
        } 
    } 
}
