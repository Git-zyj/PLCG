/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134461
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
    var_14 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_10)) : (max((1639451441476766324ULL), (((/* implicit */unsigned long long int) -7040015760982318885LL)))))), (((/* implicit */unsigned long long int) var_9))));
    var_15 += ((/* implicit */_Bool) var_11);
    var_16 = ((/* implicit */short) ((min((max((((/* implicit */unsigned int) var_6)), (2312501128U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -7040015760982318901LL))))))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */int) var_2)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)62109)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((short) -2183407598964993366LL))) : (((/* implicit */int) ((arr_1 [i_0] [i_0]) == (((/* implicit */long long int) 4294967283U))))))), (((/* implicit */int) ((arr_1 [i_0] [i_0]) > (min((((/* implicit */long long int) arr_2 [i_0] [i_0])), (2172730551406618534LL))))))));
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            var_18 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_5 [8ULL])) ? (arr_3 [0U]) : (((/* implicit */int) arr_5 [(short)10]))))));
            arr_6 [i_0] [i_1 - 1] = ((/* implicit */long long int) arr_4 [i_0] [i_1]);
            var_19 += ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (13929057473061532653ULL))))) > (-7040015760982318925LL)));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) ((-7040015760982318901LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))));
            var_21 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_5 [i_0])))) ? (min((((/* implicit */long long int) arr_5 [i_0])), (arr_1 [i_0] [i_1]))) : (-2146884618930301748LL)));
        }
        for (unsigned int i_2 = 3; i_2 < 12; i_2 += 2) 
        {
            arr_9 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) -4152401237019325699LL)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!((_Bool)1))))));
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (40450308U)));
        }
    }
    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_4 = 3; i_4 < 19; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (unsigned int i_6 = 2; i_6 < 19; i_6 += 1) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) max((((/* implicit */long long int) max((((arr_18 [i_3] [(unsigned short)3] [i_3]) + (arr_19 [i_3] [i_3] [i_4] [i_5 + 1] [i_3]))), (((((/* implicit */_Bool) arr_11 [i_3])) ? (arr_16 [i_3] [i_4] [i_5] [i_6 + 1]) : (arr_18 [i_3] [i_5] [(unsigned short)9])))))), ((~(-7040015760982318885LL)))));
                        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1507535137))));
                        arr_20 [i_3] [i_3] = ((/* implicit */signed char) ((long long int) max((var_13), (arr_14 [i_6 + 1] [i_3] [i_4 - 3]))));
                    }
                } 
            } 
        } 
        arr_21 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 11928112708965216559ULL))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 1; i_7 < 12; i_7 += 2) 
    {
        arr_25 [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [i_7 - 1]))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        arr_26 [i_7] = ((((arr_19 [i_7 + 1] [i_7] [i_7] [14U] [i_7 + 3]) > (((/* implicit */unsigned int) 2001697906)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7] [(_Bool)1]))) : ((~(arr_14 [i_7] [0U] [i_7]))));
        var_25 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */int) arr_23 [i_7]))))));
    }
}
