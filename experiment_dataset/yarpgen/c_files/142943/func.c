/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142943
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) ((((1227660214145400717ULL) | (arr_1 [i_0] [i_0]))) == (1227660214145400737ULL)));
        var_19 &= (((+(17219083859564150878ULL))) + (arr_1 [i_0] [14ULL]));
        var_20 ^= ((/* implicit */unsigned long long int) ((((arr_1 [(unsigned short)6] [i_0]) + (1227660214145400735ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)16182)) << (((arr_1 [i_0] [i_0]) - (10931704097016265216ULL))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        var_21 = min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (17219083859564150881ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52612))))), (((13928008905107811674ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)192))))));
        var_22 *= ((/* implicit */unsigned short) ((17219083859564150880ULL) > (1227660214145400754ULL)));
        var_23 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)33974)))) == (((/* implicit */int) (unsigned short)46189))));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) != ((~(((/* implicit */int) ((11732875669067169424ULL) == (7186266282051524298ULL))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 3; i_3 < 14; i_3 += 2) 
            {
                for (unsigned short i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17219083859564150849ULL)) ? (((/* implicit */int) (unsigned short)61028)) : (((/* implicit */int) (unsigned short)65324))))) | (17219083859564150896ULL)))));
                        var_26 |= ((/* implicit */unsigned short) ((((((3855919063824511294ULL) | (17219083859564150880ULL))) * (((((/* implicit */_Bool) arr_4 [11ULL] [11ULL] [i_2])) ? (arr_6 [i_4 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)44919)))))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17219083859564150878ULL)) || (((/* implicit */_Bool) 1227660214145400720ULL))));
                        var_28 += ((min((102579901376392677ULL), (((/* implicit */unsigned long long int) (unsigned short)46169)))) | (arr_6 [i_2 - 1] [i_1]));
                        var_29 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4 - 1]))) + (13901266500544519968ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62525)) && (((/* implicit */_Bool) (unsigned short)28754))))))));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_1])) >> (((17219083859564150898ULL) - (17219083859564150873ULL)))))) * (1227660214145400730ULL))) * ((~(max((1227660214145400735ULL), (17219083859564150879ULL)))))));
            var_31 = arr_4 [i_2] [7ULL] [(unsigned short)15];
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)36234))));
        var_33 = min((((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65535), ((unsigned short)33974))))) * (arr_5 [i_5] [i_5]))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5]))) / (arr_5 [0ULL] [i_5]))), (((/* implicit */unsigned long long int) max(((unsigned short)504), ((unsigned short)3856)))))));
    }
    var_34 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62525)) && (((/* implicit */_Bool) 8338419831728767338ULL)))))) | (var_16));
}
