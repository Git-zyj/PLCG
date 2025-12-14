/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185592
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
    var_17 = ((/* implicit */unsigned long long int) (~(-4160321197986951091LL)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 7; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)7)) < (((/* implicit */int) (signed char)-1))))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                            {
                                arr_13 [i_0] [i_2] [i_4] = ((/* implicit */unsigned char) (unsigned short)255);
                                var_18 = ((/* implicit */int) (~(arr_11 [i_2] [i_2 + 3] [i_2 - 2] [i_1 - 1] [i_2] [i_1 - 1])));
                                arr_14 [i_2] [i_4] [(unsigned short)9] [i_2] [i_1] [(unsigned short)7] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_1 + 1]))));
                            }
                            for (int i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                            {
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-50)), ((unsigned char)90))))));
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((arr_3 [i_2] [i_2]), (((/* implicit */unsigned short) max((((short) var_3)), (((/* implicit */short) ((_Bool) (_Bool)0)))))))))));
                                var_21 += ((/* implicit */unsigned short) ((short) ((85203872) >> (((274877906943LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                            }
                        }
                    } 
                } 
                arr_18 [(unsigned short)1] [i_0] [i_0] = ((/* implicit */int) var_5);
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        {
                            var_22 *= ((/* implicit */_Bool) -1LL);
                            arr_23 [i_7] [i_6] [i_1] [i_7] = ((/* implicit */int) (+(7404956948557574240LL)));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 += var_0;
    var_25 = ((/* implicit */unsigned char) var_7);
    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_2))));
}
