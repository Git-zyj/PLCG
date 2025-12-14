/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177390
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 12; i_2 += 1) /* same iter space */
                {
                    arr_7 [i_2] [i_0] [i_2] = ((/* implicit */signed char) var_9);
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_2 + 3] [i_2]))) : (arr_1 [i_2 - 2])))) ? (((arr_1 [i_2 + 2]) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_2 + 2] [i_1]))))) : (min((((/* implicit */long long int) arr_4 [i_0] [i_2 + 1] [(short)7])), (arr_1 [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) max((var_20), ((~(((/* implicit */int) (unsigned short)28226))))));
                                var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 + 3])) || (((/* implicit */_Bool) min((-1202911256157397998LL), (((/* implicit */long long int) arr_2 [i_0])))))))), (((unsigned short) ((((/* implicit */_Bool) (unsigned short)32628)) || (((/* implicit */_Bool) (short)-1)))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((((/* implicit */int) min((arr_2 [i_2 + 1]), (arr_2 [i_2 + 1])))) >= (((/* implicit */int) ((((/* implicit */int) arr_2 [i_2 - 1])) == (((/* implicit */int) arr_2 [i_2 + 1]))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [(short)8]))));
                    arr_14 [i_2] = ((/* implicit */_Bool) ((((_Bool) arr_5 [i_2 + 2] [i_2 + 3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 14396709230533089287ULL)) ? (9173360705044014721LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)81)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-44))) : ((~(9173360705044014721LL))))) : (((/* implicit */long long int) (~((~(((/* implicit */int) var_3)))))))));
                }
                for (unsigned int i_5 = 2; i_5 < 12; i_5 += 1) /* same iter space */
                {
                    arr_17 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1])) << (((max((arr_5 [i_5 - 2] [i_1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_5]))))))) - (15439856925482035561ULL)))));
                    var_23 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))))), ((!(((/* implicit */_Bool) arr_16 [i_5 + 3] [i_5] [i_5 + 3]))))));
                    arr_18 [i_0] [i_0] = arr_10 [i_0] [i_1] [i_1] [(signed char)10];
                }
                var_24 = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)255));
                /* LoopSeq 1 */
                for (unsigned short i_6 = 2; i_6 < 14; i_6 += 1) 
                {
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((long long int) (~(((((/* implicit */_Bool) 399467643)) ? (((/* implicit */int) (unsigned short)37310)) : (arr_6 [(signed char)4] [i_0] [i_1] [i_6])))))))));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        var_26 = ((/* implicit */long long int) arr_9 [i_0] [i_1] [10U] [i_0]);
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (signed char)81))));
                    }
                    var_28 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) arr_4 [i_6 - 2] [i_1] [i_0])), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37310))) : (4050034843176462329ULL))))), (((/* implicit */unsigned long long int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) arr_24 [i_6 - 1] [i_1] [i_6 + 1] [i_0])))))));
                    var_29 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_25 [i_0] [(unsigned short)10] [i_1] [(unsigned short)10] [i_6] [i_6 - 2])), (14396709230533089287ULL)));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned short) var_0);
    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)100)) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -5557191985957785907LL))))), (min((4577387576082380796ULL), (((/* implicit */unsigned long long int) (unsigned short)37310)))))) : (((((/* implicit */_Bool) var_14)) ? (1928141051900139035ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45544))))))))));
}
