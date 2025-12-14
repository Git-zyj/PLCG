/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165288
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
    var_14 -= ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_3), (6264578337815436372ULL)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_1 [i_0]))))) & (max((((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))), (min((((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])), (12182165735894115257ULL))))))))));
                var_16 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) (short)32767)))) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (12182165735894115245ULL)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */int) 281474972516352LL);
                        var_19 = ((/* implicit */unsigned char) ((long long int) arr_3 [i_2]));
                    }
                    for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_20 += ((/* implicit */short) var_10);
                        arr_11 [i_0] [i_1] = ((/* implicit */long long int) (-(min(((+(var_2))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))));
                    }
                    /* LoopSeq 4 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        arr_14 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned char)0)), (6264578337815436372ULL)));
                        var_21 = ((/* implicit */short) (~(((/* implicit */int) ((arr_10 [i_0] [6] [i_2] [i_5]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
                        arr_15 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */int) (_Bool)1);
                    }
                    for (long long int i_6 = 1; i_6 < 17; i_6 += 1) /* same iter space */
                    {
                        var_22 |= ((/* implicit */unsigned short) ((1522569911) % (((/* implicit */int) var_6))));
                        arr_19 [i_0] [i_0] = max((((unsigned int) ((long long int) (short)-449))), (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) != (12182165735894115263ULL)))), (var_10)))));
                        var_23 = ((/* implicit */unsigned char) ((((arr_13 [i_6 - 1] [i_6 + 1] [i_6] [i_6]) ? (((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22870))) : (6264578337815436355ULL))) : (2093505818435877473ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [(unsigned short)17] [i_1] [(unsigned short)17] [i_6] [i_6 + 1])) >> (((((/* implicit */int) arr_17 [i_0] [i_0] [i_2] [5] [i_6 + 1])) - (58316))))))));
                    }
                    for (long long int i_7 = 1; i_7 < 17; i_7 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */int) max((((unsigned long long int) (unsigned char)103)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_20 [i_0] [i_0]), (((/* implicit */int) (_Bool)0))))) ? ((-(((/* implicit */int) arr_9 [i_7] [i_2] [i_0] [i_0])))) : (((/* implicit */int) ((short) (short)18001))))))));
                        var_25 &= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_1 [i_7 - 1]))))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_12))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_12)) : (var_10)))))) ? (arr_22 [i_0] [i_8] [i_0]) : (((((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) (short)14303))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) - (arr_10 [i_0] [i_1] [i_2] [(short)14])))))));
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (+(7214758651444849542ULL)))) ? (((((/* implicit */_Bool) 11727802476636483096ULL)) ? (((/* implicit */int) arr_6 [i_8] [(unsigned char)14] [i_8])) : (((/* implicit */int) (unsigned short)57090)))) : (((/* implicit */int) (unsigned char)121))));
                        var_29 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((3957351103U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (((((/* implicit */_Bool) arr_5 [(short)12])) ? (((/* implicit */unsigned long long int) arr_20 [(_Bool)1] [i_0])) : (var_8))) : (((((/* implicit */_Bool) (short)-18001)) ? (6264578337815436372ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7016))))))), (((/* implicit */unsigned long long int) ((unsigned char) (+(6264578337815436394ULL)))))));
                    }
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) min(((-(((((/* implicit */unsigned long long int) 217650291)) | (var_13))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))))))));
                }
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((141863388262170624LL), (((/* implicit */long long int) 7936))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min(((short)-14273), (((/* implicit */short) (unsigned char)61))))) ^ (((int) (short)14302))))) : (((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)75))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
}
