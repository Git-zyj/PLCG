/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154859
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
    var_12 = ((/* implicit */short) (~(var_11)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_6 [i_1] [i_1] [i_1 - 2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_5)) ^ (((arr_4 [i_2] [i_2]) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_2])) - (((/* implicit */int) arr_5 [i_0] [i_0] [i_2])))))))));
                    arr_7 [i_0] [i_1 + 3] [i_0] [i_2] = -7841814915663074548LL;
                    arr_8 [i_0] [(_Bool)1] [i_2] = ((((arr_2 [i_0] [i_0] [i_1 - 1]) ? (((/* implicit */int) arr_2 [i_1] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 2])))) > ((+(((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((-2586911862396618110LL) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_2]))) : (var_9))))))))));
                            var_13 = max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_3 - 2] [i_4 - 1] [0LL]))))), ((-(20ULL))));
                            arr_14 [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_4 [i_4 - 1] [i_4 - 1]), (((/* implicit */unsigned long long int) arr_11 [i_4 - 1] [i_1] [i_3] [i_3] [i_2] [i_3 + 1]))))) ? (((arr_10 [0ULL]) ? (max((((/* implicit */unsigned long long int) (short)5066)), (var_3))) : (((/* implicit */unsigned long long int) arr_3 [i_3 + 2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_3 + 2])) / (((/* implicit */int) (_Bool)1)))))));
                            arr_15 [9LL] [i_0] [i_1] [i_1 + 1] [i_3] [i_0] [i_4] = ((/* implicit */short) ((2586911862396618102LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((-2586911862396618114LL), (((/* implicit */long long int) (short)3))))) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_1])) ^ (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) arr_2 [10ULL] [10ULL] [10ULL]))))) : (arr_3 [i_0])));
                    }
                    arr_16 [9LL] [i_1] [9LL] [i_0] = ((((/* implicit */_Bool) var_6)) ? (-2586911862396618108LL) : (2586911862396618107LL));
                }
            } 
        } 
    } 
    var_15 -= ((18446744073709551605ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
    var_16 = ((/* implicit */short) var_6);
    /* LoopSeq 3 */
    for (long long int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            var_17 = ((((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_5] [i_6]))))) | (max((((/* implicit */long long int) (_Bool)1)), (7341649120871151323LL))));
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    for (long long int i_9 = 1; i_9 < 10; i_9 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */short) arr_9 [i_5] [i_5]);
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(2586911862396618087LL)))) && (((var_4) == (((((/* implicit */_Bool) var_2)) ? (var_10) : (7841814915663074570LL)))))));
                            var_20 = ((/* implicit */_Bool) (short)-15256);
                        }
                    } 
                } 
            } 
        }
        var_21 = (((-(-2586911862396618110LL))) * (((((((/* implicit */long long int) ((/* implicit */int) arr_21 [(_Bool)1] [i_5] [i_5] [i_5]))) / (var_4))) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
        var_22 = ((/* implicit */_Bool) max((var_22), ((_Bool)1)));
        var_23 ^= ((/* implicit */_Bool) 10LL);
        arr_28 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-2586911862396618069LL) + (-4887299867142578389LL)))) ? ((+(((/* implicit */int) (short)11262)))) : (((/* implicit */int) var_0))));
    }
    for (long long int i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
    {
        arr_32 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) 7160888623641571145LL)) ? (((/* implicit */int) max((((((/* implicit */_Bool) 7160888623641571139LL)) && (((/* implicit */_Bool) var_11)))), (((arr_2 [i_10] [i_10] [i_10]) && (((/* implicit */_Bool) arr_9 [7LL] [i_10]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((2586911862396618111LL) / (var_11)))) && (((/* implicit */_Bool) var_5)))))));
        var_24 |= ((/* implicit */_Bool) -7160888623641571152LL);
        var_25 = ((long long int) ((arr_23 [i_10] [i_10] [i_10] [i_10]) < (arr_23 [i_10] [i_10] [i_10] [i_10])));
        arr_33 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (max((var_11), (((/* implicit */long long int) ((short) var_8)))))));
    }
    for (long long int i_11 = 0; i_11 < 21; i_11 += 2) 
    {
        arr_36 [i_11] = (!(((/* implicit */_Bool) (+(2586911862396618118LL)))));
        var_26 = ((/* implicit */_Bool) arr_34 [i_11] [i_11]);
    }
}
