/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185071
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
    var_17 = ((/* implicit */_Bool) var_11);
    var_18 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) > ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)252))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 1; i_4 < 13; i_4 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_1] [i_4] [i_3 - 1] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (+(max((293292444U), (3152628547U)))))) || (((/* implicit */_Bool) var_10))));
                            var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_3])) >> (((arr_10 [i_0] [i_0 - 1] [10U] [i_0 - 1]) - (924199414606293856ULL)))))), (((((/* implicit */_Bool) (-(1142338742U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)7840)) : (((/* implicit */int) arr_0 [i_0 - 1]))))) : (var_15)))));
                            arr_16 [i_0] [i_1] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */int) ((unsigned int) 3152628547U));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((max((1825489913990174272ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) % (((/* implicit */unsigned long long int) var_2))))) ? (((((((/* implicit */_Bool) var_14)) ? (arr_12 [i_0] [i_1] [i_0] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4731))))) * (((/* implicit */unsigned long long int) 3196081926U)))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_7)), (min((((/* implicit */unsigned int) 129024)), (var_12)))))))))));
                        }
                    } 
                } 
            } 
            arr_17 [i_0] [(short)1] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_0 + 1] [i_1 - 1] [i_0 - 1] [i_1 + 1])) ? (((/* implicit */int) (unsigned short)4731)) : (((/* implicit */int) (_Bool)0))))), (1142338749U)));
            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (unsigned short)8014)), (arr_12 [i_1] [i_1] [i_1] [i_1 - 1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >= (0U)))))));
            var_21 = ((((/* implicit */_Bool) max((1142338749U), (((unsigned int) var_1))))) ? (((/* implicit */int) ((((/* implicit */int) min((arr_7 [9U] [9U] [i_1]), (arr_7 [(unsigned short)0] [i_1] [9])))) > (((/* implicit */int) (!((_Bool)1))))))) : ((-(-455454717))));
        }
        /* vectorizable */
        for (long long int i_5 = 2; i_5 < 12; i_5 += 1) 
        {
            arr_22 [i_0 + 1] = ((/* implicit */unsigned long long int) ((unsigned char) 1825489913990174287ULL));
            arr_23 [i_0] [i_5] [i_5] = ((/* implicit */signed char) arr_3 [i_0]);
        }
        for (int i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_22 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_7]))));
                arr_29 [i_0 - 1] [i_0 - 1] [i_7] = ((/* implicit */unsigned int) ((short) min((((/* implicit */unsigned int) (unsigned short)60807)), (1142338749U))));
            }
            for (signed char i_8 = 3; i_8 < 14; i_8 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_9 = 4; i_9 < 13; i_9 += 4) 
                {
                    var_23 = ((/* implicit */unsigned int) ((_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (var_13))))));
                    arr_36 [i_0] [11ULL] [i_8 - 1] [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */_Bool) (+(1295192936582867935ULL)))) ? (13209484056415883916ULL) : (arr_13 [i_9] [i_8 + 1] [0] [i_9] [i_0 - 1] [i_9 + 1]))) - (16054535152440690686ULL)));
                }
                arr_37 [i_0] [(unsigned short)12] [2] = 17151551137126683680ULL;
                arr_38 [i_6] [i_6] [i_0] = ((/* implicit */int) arr_7 [(unsigned short)13] [i_6] [i_6]);
            }
            arr_39 [i_6] [i_0] |= ((/* implicit */long long int) ((var_12) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)-2))))));
        }
        var_24 += (~(((((/* implicit */_Bool) var_1)) ? (arr_12 [i_0 + 1] [i_0 + 1] [i_0 - 1] [14U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 2) 
        {
            arr_42 [i_10] [i_10 + 1] [i_10] = ((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_10] [i_10]);
            arr_43 [i_10] = ((/* implicit */_Bool) (short)-29601);
            arr_44 [12U] |= ((/* implicit */int) 1350643448662533288ULL);
        }
        for (int i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            arr_47 [i_0 - 1] [i_11] = ((/* implicit */unsigned short) 67108863U);
            /* LoopSeq 2 */
            for (unsigned short i_12 = 4; i_12 < 14; i_12 += 3) 
            {
                arr_50 [i_12] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0 - 1] [i_0])) ? (1727103475U) : (((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [8ULL] [i_11]))) != (17151551137126683681ULL))))) : ((~(4294967295U)))))));
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_7))));
            }
            for (unsigned int i_13 = 0; i_13 < 15; i_13 += 2) 
            {
                var_26 += ((/* implicit */unsigned int) ((_Bool) ((unsigned int) max((1537875579U), (((/* implicit */unsigned int) arr_25 [i_0 + 1]))))));
                var_27 = ((4294967275U) * (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_11]))) - (9013436940043883725ULL)))) ? (min((3743854559U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13351))))));
                arr_54 [i_0] [i_11] [i_13] = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) max((122880U), (((/* implicit */unsigned int) var_5))))), (12084841157539886419ULL)))));
            }
            arr_55 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 16621254159719377335ULL);
        }
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 15; i_14 += 2) 
        {
            var_28 ^= ((/* implicit */_Bool) 4);
            arr_58 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned int) var_13);
            arr_59 [i_0 + 1] [i_14] [i_14] = var_16;
        }
        for (unsigned short i_15 = 0; i_15 < 15; i_15 += 3) 
        {
            var_29 = ((/* implicit */short) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 32767))))), (arr_1 [10ULL]))), (((/* implicit */unsigned int) ((signed char) (short)16302)))));
            arr_63 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3874121491U))));
            arr_64 [(signed char)1] [i_0 + 1] [(signed char)1] = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)11))) * (3850642193U))), (((/* implicit */unsigned int) ((var_0) != (((/* implicit */unsigned int) arr_5 [i_0 - 1] [i_0 + 1])))))));
        }
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [0ULL] [i_0 + 1]))));
    }
}
