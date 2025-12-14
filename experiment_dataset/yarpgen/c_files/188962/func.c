/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188962
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((long long int) ((int) ((int) var_1)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)-50)))), (((/* implicit */int) (unsigned char)0))))) || (((/* implicit */_Bool) min((-1043758335204402692LL), ((~(-1043758335204402683LL)))))))))));
                var_18 = ((/* implicit */unsigned long long int) var_15);
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned int i_3 = 4; i_3 < 24; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_19 &= ((/* implicit */int) (~(min((var_13), (var_8)))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) 1043758335204402682LL))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        {
                            var_21 *= var_6;
                            var_22 = ((/* implicit */int) (unsigned char)0);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        for (long long int i_8 = 1; i_8 < 21; i_8 += 1) 
        {
            {
                arr_28 [11U] [11U] [i_7] = ((/* implicit */unsigned char) var_13);
                arr_29 [i_7] [i_7] = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) var_2)), (-7750768270517086085LL))), (min((-8925569720845842654LL), (((((var_1) + (9223372036854775807LL))) << (((var_8) - (9680244627861939629ULL)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((((unsigned long long int) var_13)) - (9091324692518571063ULL)))));
    /* LoopNest 2 */
    for (unsigned char i_9 = 1; i_9 < 20; i_9 += 2) 
    {
        for (unsigned char i_10 = 1; i_10 < 19; i_10 += 3) 
        {
            {
                var_24 += ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) var_1))) & (((/* implicit */int) var_10))));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        {
                            var_25 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) % (274877841408ULL)));
                            arr_42 [i_9] = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34307)))))))) == (1043758335204402683LL)));
                            arr_43 [i_9 - 1] [i_10] [i_12] [12U] [i_12] [i_12] &= ((/* implicit */unsigned char) (signed char)-116);
                            arr_44 [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) max(((-(6357592642256345737LL))), (((/* implicit */long long int) ((min((-1043758335204402683LL), (((/* implicit */long long int) var_2)))) > ((-(2339647695542803743LL))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (unsigned short)0))));
            }
        } 
    } 
}
