/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185087
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
    var_16 = ((/* implicit */unsigned short) (+(-5781998348538922497LL)));
    var_17 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) ? (70368744177663ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 70368744177656ULL))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_0] [22U] |= ((/* implicit */unsigned long long int) ((unsigned short) ((arr_1 [i_0 + 4] [i_0 + 2]) ? (((/* implicit */int) arr_1 [i_1] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0] [i_0 - 1])))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned int) ((/* implicit */int) (!(var_12))))) > (arr_14 [1ULL] [i_1] [i_2] [i_1] [i_0 + 3])))));
                                arr_17 [i_0] [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)94)) ? (3386598789116032820LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) 5851229301125785849LL))))));
                                var_18 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((unsigned short)37411), (((/* implicit */unsigned short) (unsigned char)232))))), (arr_7 [i_0] [i_0 + 4] [i_4 - 1]))))));
                                var_19 += ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37384))) / (arr_13 [i_0] [(_Bool)1] [i_2] [i_0] [i_1] [(unsigned short)1] [i_0]));
                                arr_18 [i_1] [i_4] [i_3] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) var_1))))), (-5851229301125785868LL)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65188))) : (arr_9 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned short)5886)) ? (arr_8 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */int) (unsigned short)1)))) : (min((-1307357963), (((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        {
                            arr_23 [i_1] [i_1] [i_1] = 1307357962;
                            var_20 = ((/* implicit */unsigned short) var_15);
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_8 [i_6] [i_1] [i_1] [i_0 + 4]))) ? ((~(var_4))) : (((((/* implicit */_Bool) arr_13 [i_1] [i_5] [i_5] [i_5] [19ULL] [i_1] [i_0])) ? (arr_8 [i_0 + 3] [i_1] [i_5] [i_6]) : (((/* implicit */int) (short)0))))));
                            var_22 = ((/* implicit */int) arr_2 [(short)11]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))))), (min(((unsigned short)0), (((/* implicit */unsigned short) var_0)))))))) < ((((-(16915076942146279263ULL))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12)))))))));
}
