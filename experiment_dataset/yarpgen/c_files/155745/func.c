/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155745
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
    for (short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_13 = (unsigned char)60;
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    var_14 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)25));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)227))));
                                var_15 = ((/* implicit */unsigned char) 16826777151947447915ULL);
                                arr_13 [i_1] [i_2 - 2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (unsigned char)25))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_2 [i_2 - 2]))));
                            }
                        } 
                    } 
                    var_17 = ((((/* implicit */int) arr_5 [i_2 + 1])) + (((/* implicit */int) arr_5 [i_2 + 1])));
                }
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    arr_17 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_15 [i_1] [i_0 - 2] [i_5]))) ? (((3319293993U) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) 16247142563641901467ULL)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 688747913))))));
                    var_18 = ((/* implicit */unsigned int) (~(((int) (unsigned char)42))));
                }
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -3674683348394503889LL)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (short)4805))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) + (((unsigned int) var_8)))) ^ (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)3)), (233765830))))));
                                arr_25 [i_0] [i_7] [i_6] [i_1] [i_0] [i_7] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)15821)), (1174701736U)));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)123)) + (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max(((((((~(((/* implicit */int) (unsigned short)15821)))) + (2147483647))) >> (((((/* implicit */int) ((short) (short)-8457))) + (8462))))), (((((/* implicit */int) (unsigned char)42)) % (((/* implicit */int) ((unsigned char) var_8)))))));
                }
                for (unsigned int i_9 = 1; i_9 < 11; i_9 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 1; i_10 < 11; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) 
                        {
                            {
                                arr_35 [(signed char)4] [i_0] [i_9] [i_9] [(signed char)4] = ((/* implicit */unsigned char) max((((3472640064U) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)49714))))))));
                                arr_36 [i_0] = ((/* implicit */unsigned char) ((signed char) ((arr_4 [i_0 + 1] [i_11]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33))))));
                            }
                        } 
                    } 
                    var_21 &= ((-894098212) / (((((/* implicit */int) ((((/* implicit */_Bool) 2661049807U)) && (((/* implicit */_Bool) (unsigned char)155))))) >> (((((/* implicit */int) (short)17062)) - (17062))))));
                    var_22 = ((/* implicit */int) max((var_22), (2136865073)));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) var_2)) : (-1937975018))))))));
    var_24 = (((_Bool)1) && ((!(((/* implicit */_Bool) ((unsigned short) var_0))))));
}
