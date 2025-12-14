/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144171
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
    var_20 = ((/* implicit */unsigned int) max((12202297194003811631ULL), (5726365416015737969ULL)));
    var_21 |= var_3;
    var_22 = ((/* implicit */unsigned int) ((unsigned long long int) 15281699639990058084ULL));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (4294967294U))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 556089197U)) > (5857430269193399087ULL)));
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((max((((/* implicit */long long int) arr_1 [0LL] [i_1])), (var_10))) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) 18U)))))))));
        var_25 = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 2U)))) + (var_5))), (((/* implicit */unsigned int) max((arr_0 [10U]), (arr_0 [0LL]))))));
        var_26 |= ((((/* implicit */unsigned long long int) 1U)) & (5857430269193399087ULL));
        var_27 = ((/* implicit */unsigned long long int) arr_1 [12ULL] [12ULL]);
        var_28 = ((/* implicit */unsigned long long int) ((unsigned int) max((4294967294U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [(signed char)12]))))))));
    }
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    var_29 |= ((/* implicit */signed char) arr_9 [i_3] [i_3]);
                    arr_15 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) var_18)), (arr_11 [i_2] [i_3] [i_2]))))) ? (min((arr_7 [i_4] [i_2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_4])) || (((/* implicit */_Bool) 4294967291U))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))));
                    var_30 = ((/* implicit */unsigned int) 5857430269193399101ULL);
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 13; i_5 += 4) 
        {
            for (unsigned int i_6 = 2; i_6 < 13; i_6 += 3) 
            {
                {
                    arr_20 [i_2] [i_2] [i_6 - 2] = ((/* implicit */unsigned long long int) var_6);
                    arr_21 [i_2] [i_2] [i_5] [i_6 + 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((-7300596381781044015LL), (((/* implicit */long long int) arr_17 [i_2] [i_2]))))) && (((/* implicit */_Bool) 5127083359264817358LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_11 [i_2] [i_5] [i_2]), (((/* implicit */unsigned int) arr_19 [i_2]))))) ? (min((arr_8 [i_2] [i_2]), (((/* implicit */long long int) arr_11 [i_5] [i_5] [i_2])))) : (((/* implicit */long long int) ((unsigned int) var_5))))))));
                }
            } 
        } 
        var_31 = ((/* implicit */signed char) ((unsigned long long int) min((((arr_9 [i_2] [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))))), (((unsigned long long int) var_12)))));
    }
}
