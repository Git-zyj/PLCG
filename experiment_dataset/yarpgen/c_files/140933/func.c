/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140933
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
    var_19 &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) > ((~(var_15))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((-2052209664396668987LL) >= (arr_6 [i_0] [i_1] [i_2] [i_3])))))))));
                            arr_12 [i_3] [6LL] [6LL] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_0 - 1]) & ((~(((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_5), (((/* implicit */signed char) (_Bool)1)))))))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) | (arr_9 [i_0] [i_1] [i_0]))), (max((arr_4 [i_1]), (((/* implicit */unsigned long long int) var_12))))))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_9 [i_1 + 1] [i_1] [i_0 - 1]), (((/* implicit */unsigned long long int) min((arr_8 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1]), (arr_10 [i_0] [(_Bool)1] [(unsigned short)16] [i_2] [i_3]))))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(var_2)))), (min((((/* implicit */unsigned char) arr_2 [i_0 - 1])), (arr_7 [i_0 + 1] [i_0] [i_0] [i_0 - 1]))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_3 [i_0] [i_1] [i_1 + 2])))) ? ((+(arr_3 [i_0 + 1] [i_0 + 1] [i_1 + 2]))) : ((+(arr_3 [i_1 - 1] [16LL] [i_1 + 2]))))))));
                arr_13 [(signed char)0] [i_1] [i_1] &= ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1 + 1]);
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_4)))) ? (((/* implicit */unsigned long long int) min((-2052209664396668987LL), (((/* implicit */long long int) arr_3 [i_1] [i_1] [i_0 - 1]))))) : (((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_4 [2U])))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [1ULL] [(_Bool)1] [i_0] [i_0 - 1]))) <= (arr_8 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1])))) ^ (((/* implicit */int) var_14)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_4 = 4; i_4 < 21; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            for (short i_6 = 2; i_6 < 24; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((unsigned int) ((var_3) % (((/* implicit */int) (signed char)53))))))));
                        arr_24 [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)23133)) > (((/* implicit */int) ((((/* implicit */int) arr_22 [i_4] [i_5] [i_6] [i_7])) < (((/* implicit */int) var_9))))))))) ^ ((+(((unsigned long long int) arr_22 [i_4] [i_5] [i_6 + 1] [i_7]))))));
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) ((17440934128794162774ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7] [i_6] [i_5] [i_4 + 1]))) : (arr_16 [i_4] [i_5] [i_6]))))))) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_4] [i_5] [i_6] [i_7]))))), (((((/* implicit */_Bool) var_6)) ? (var_7) : (var_4))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_4] [i_5]))))))))));
                        arr_25 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_7] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */int) max((var_26), (arr_23 [i_4] [i_4] [(unsigned short)5] [(unsigned short)5])));
        var_27 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */int) var_16))))) && (((/* implicit */_Bool) arr_17 [i_4 - 1] [i_4 + 3]))))) << (((((((((/* implicit */int) arr_22 [i_4] [i_4 - 2] [i_4] [i_4 + 2])) + (2147483647))) >> (((((((/* implicit */_Bool) arr_23 [i_4] [(unsigned char)0] [i_4] [i_4])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))))) - (4605911729154328383ULL))))) - (131049)))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 1; i_8 < 11; i_8 += 4) 
    {
        var_28 = ((/* implicit */short) 666786795);
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */int) var_12)) >> (((((((/* implicit */_Bool) arr_5 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_8 - 1]))) : (var_7))) - (21136ULL))))))));
    }
}
