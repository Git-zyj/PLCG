/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125298
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (var_6)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    var_18 &= ((/* implicit */unsigned char) 2730049412U);
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6653588631903378386ULL)) ? (11793155441806173229ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 72057594037927935ULL)))) : ((+(32767ULL)))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 3; i_3 < 24; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (signed char i_5 = 4; i_5 < 24; i_5 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)208))));
                                var_21 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_4 [i_1] [i_3 + 1] [i_0]));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-75))) & (arr_4 [i_0] [i_1] [i_0])));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
                    {
                        var_23 = ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [1ULL] [i_3 - 2])) ? (14068594870084848682ULL) : (var_6));
                        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 2; i_7 < 22; i_7 += 4) 
                        {
                            var_25 = ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_4 [24U] [i_3 - 1] [i_0]));
                            var_26 &= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 6653588631903378379ULL)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) var_13)))));
                            var_27 = arr_15 [i_7 + 1] [i_0] [i_3 - 2] [(unsigned short)5] [(unsigned short)5] [i_0];
                        }
                        for (unsigned short i_8 = 3; i_8 < 24; i_8 += 3) 
                        {
                            var_28 = (~(((((/* implicit */_Bool) 32767ULL)) ? (5732199527012680266ULL) : (7104039668566977790ULL))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_24 [(signed char)19] [i_0] [(signed char)19] [(signed char)19] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [3U] [3U] [3U] [3U] [i_8 + 1] [i_0])))))) ? (12714544546696871350ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-119)))))));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) 32767ULL))));
                        }
                        var_31 = ((/* implicit */unsigned long long int) ((signed char) ((5053297274831321267ULL) >> (((12572460063473744786ULL) - (12572460063473744758ULL))))));
                        var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_4 [i_0] [i_1] [i_0]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125)))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            var_33 = arr_6 [i_0];
                            var_34 = (+((~(2238717759935123016ULL))));
                            var_35 = ((/* implicit */unsigned char) var_4);
                            var_36 = ((unsigned long long int) arr_12 [i_0] [i_0] [(signed char)22] [i_0]);
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (5053297274831321267ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)42)))))) ? (6977368249919961902ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45866))) & (arr_22 [i_0] [14ULL] [5ULL] [(signed char)22] [i_10]))))));
                        }
                        for (signed char i_11 = 1; i_11 < 24; i_11 += 4) 
                        {
                            var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0ULL))));
                            var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)81)) > (((/* implicit */int) arr_27 [i_0] [i_1] [i_3] [i_3 - 2]))));
                        }
                        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) 32767ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3]))) : (1209340477746680023ULL)));
                        var_41 = (+(var_14));
                        var_42 = ((/* implicit */unsigned int) ((unsigned short) arr_12 [i_3 - 1] [i_3 - 3] [i_3 - 1] [i_3 - 1]));
                    }
                }
                for (unsigned short i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    var_43 = ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) (signed char)-79)))));
                    var_44 = ((/* implicit */signed char) ((unsigned long long int) max((arr_12 [i_12] [i_1] [i_0] [i_0]), (arr_12 [14U] [i_1] [(unsigned char)23] [i_1]))));
                }
                var_45 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned short) var_5)));
            }
        } 
    } 
}
