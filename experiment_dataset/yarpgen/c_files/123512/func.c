/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123512
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) (+(((int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])))))));
                        var_21 = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) (unsigned short)57570)), (2049181631))), (((/* implicit */int) ((_Bool) -1996621910)))));
                        arr_10 [i_3] [11ULL] [i_1] [i_0] = ((/* implicit */int) ((6588974234981410515ULL) >= (((/* implicit */unsigned long long int) arr_8 [i_3 - 1] [i_3 - 1]))));
                        var_22 = ((/* implicit */long long int) (+(((((arr_1 [i_0]) ^ (arr_9 [i_3] [0ULL] [i_3]))) ^ (var_11)))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_3 [i_0] [i_0] [i_0])))));
        var_23 = ((/* implicit */int) arr_0 [i_0]);
        arr_12 [i_0] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) -2049181649)), (((var_16) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [4ULL] [i_0] [i_0])))))))));
    }
    for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
        {
            var_24 |= ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) 1752129511)) : (arr_13 [i_4] [i_4]))))) ? (((/* implicit */unsigned long long int) (-(2049181647)))) : (((((2522765032507319776ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [13U]))))) ^ (((/* implicit */unsigned long long int) (~(2049181661)))))));
            arr_17 [i_5] [i_5] [i_5] = ((/* implicit */short) ((signed char) min((((/* implicit */unsigned long long int) ((-2049181661) == (2049181670)))), (arr_15 [i_4] [i_4] [i_5]))));
        }
        for (int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((var_12) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_18 [(unsigned short)2] [i_6] [i_6])))))) : ((~(max((((/* implicit */int) arr_14 [i_4] [i_6])), (arr_16 [i_6] [14ULL] [i_6]))))))))));
            var_26 = ((/* implicit */unsigned long long int) arr_16 [i_4] [i_4] [i_6]);
            var_27 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) 2522765032507319776ULL)))) ? (18072785411589136541ULL) : (min((var_1), (var_1))))) <= (max((arr_13 [i_4] [i_6]), (6276918444011824390ULL)))));
        }
        for (int i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            var_28 += (-(var_4));
            arr_23 [i_7] = ((/* implicit */unsigned long long int) (unsigned short)41657);
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_19 [i_7])) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_16 [i_4] [i_4] [i_7])), (var_3)))))) ? (((((((/* implicit */_Bool) arr_22 [i_7] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-22))) : (3591187234831856333LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_7] [i_4]))))) : (((/* implicit */long long int) arr_21 [8ULL] [i_4])))))));
        }
        arr_24 [i_4] = ((/* implicit */int) min((((224154809825525808ULL) >> (((-2049181648) + (2049181698))))), (((/* implicit */unsigned long long int) (-(-3591187234831856310LL))))));
    }
    var_30 ^= ((/* implicit */int) (~(var_5)));
}
