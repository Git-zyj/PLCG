/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154651
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
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_12 += ((/* implicit */unsigned int) max((((/* implicit */long long int) min((arr_1 [i_0 + 2] [i_0 - 2]), (arr_1 [i_0 + 2] [i_0 - 2])))), (((((/* implicit */_Bool) var_4)) ? (283528985467091366LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 2])))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (signed char)127)), (var_11))), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */short) arr_2 [i_1] [i_0] [i_1]))))) ? (((((/* implicit */int) var_7)) << (((((/* implicit */int) (unsigned char)248)) - (234))))) : (((/* implicit */int) arr_0 [i_0] [i_0 + 3]))))) : (((unsigned long long int) ((unsigned short) arr_3 [i_0] [i_1]))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                arr_7 [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-12521)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2 - 1]))) : (((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                arr_8 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_2] [i_0] [i_0])) % (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0] [i_2])))));
            }
            for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                arr_11 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) min(((signed char)127), ((signed char)-112))));
                var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned char)110)) >> (((/* implicit */int) var_2))))))) >= (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) (unsigned char)188))))) ? (min((var_11), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_9 [2] [i_3])))))))));
            }
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (unsigned int i_5 = 2; i_5 < 21; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) var_2);
                            var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_6] [i_5] [i_4] [i_0 + 2])) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_1])) < (((/* implicit */int) (_Bool)0))))))) >= (((((/* implicit */int) max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned char) var_7))))) ^ (((/* implicit */int) ((short) -7468418087917628794LL)))))));
                            arr_21 [i_0] [i_0] [i_4] [i_6] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((3631451632606770172LL), (((11LL) * (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))))))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= ((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (short)-17128)))))))));
        }
    }
    for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */int) ((signed char) arr_18 [i_7] [i_7] [i_7] [i_7] [i_7]))) >= (((-1930841344) & (((/* implicit */int) (unsigned char)45))))));
        var_18 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((arr_20 [i_7] [i_7] [i_7]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7] [i_7])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 17970053757466468563ULL)))) : (((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_11))))));
        /* LoopNest 2 */
        for (long long int i_8 = 3; i_8 < 12; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 15; i_11 += 2) 
                        {
                            {
                                arr_36 [i_7] [(short)14] [i_9] [i_11] [i_11] |= ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) var_0)))))), (((long long int) var_4))));
                                var_19 |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_15 [i_8 + 1])) >= (((/* implicit */int) arr_3 [i_11] [i_11]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_7] [i_7])))))));
                                arr_37 [i_7] [i_8] [i_7] [i_7] = ((/* implicit */short) (unsigned short)25647);
                                arr_38 [(_Bool)1] [i_8] [(signed char)13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)0))));
                                var_20 = ((/* implicit */unsigned short) max((-4896665880993865317LL), (5036225331361284020LL)));
                            }
                        } 
                    } 
                    arr_39 [i_7] [i_8] [i_9] [i_9] = max((((/* implicit */long long int) ((((/* implicit */int) arr_30 [i_8 + 1] [(signed char)3])) & (arr_35 [i_8 + 1] [i_8 - 2] [i_9])))), (max((((/* implicit */long long int) (~(((/* implicit */int) (short)-8439))))), (((((/* implicit */_Bool) var_0)) ? (535344536778885498LL) : (((/* implicit */long long int) arr_18 [i_7] [17ULL] [14] [i_7] [i_7])))))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned long long int) ((((max((((/* implicit */int) (unsigned char)23)), (var_4))) > (((/* implicit */int) ((unsigned char) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : ((~(var_8)))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) ((unsigned char) var_6))) - (186)))));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) min(((signed char)-80), ((signed char)-80))))) < (min((((/* implicit */int) var_7)), (var_4)))));
    var_24 = var_11;
}
