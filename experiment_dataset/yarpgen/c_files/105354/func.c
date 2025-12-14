/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105354
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
    var_19 = ((/* implicit */int) min((var_9), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) (unsigned short)0))))))));
    var_20 = ((/* implicit */long long int) var_15);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [4ULL] [4ULL])) ? (var_2) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (1966080U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144))))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))))))));
        arr_2 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)193)) * (((/* implicit */int) (short)-30684))))) * (((long long int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) var_11)))))));
        arr_3 [i_0] = (~((~(((/* implicit */int) var_7)))));
        var_22 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) ((576460752303423487LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) > ((-(((/* implicit */int) (signed char)127))))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (arr_1 [i_0])))) ? ((~(arr_1 [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0] [i_0])))))))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) var_2);
            arr_10 [1] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < (arr_9 [i_1] [i_1] [i_2]))))));
        }
        for (long long int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    {
                        var_24 = ((/* implicit */short) (~((~(((/* implicit */int) (_Bool)1))))));
                        var_25 = ((((/* implicit */_Bool) var_13)) ? ((+(min((((/* implicit */unsigned long long int) var_2)), (var_6))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_12 [i_1] [i_1])) : (((/* implicit */int) (short)20378)))), (((/* implicit */int) (unsigned char)89))))));
                        var_26 = ((/* implicit */long long int) var_3);
                    }
                } 
            } 
            arr_21 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -330479022)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (short)-11413))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1])) && (((/* implicit */_Bool) -330479022))))) : (((/* implicit */int) (unsigned char)62))));
            /* LoopNest 2 */
            for (long long int i_6 = 2; i_6 < 10; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    {
                        arr_28 [(unsigned char)2] [i_3] &= ((/* implicit */int) var_8);
                        arr_29 [i_1] [i_1] [(unsigned char)5] [i_1] = ((/* implicit */unsigned short) max((((arr_27 [i_6 + 2] [i_7] [i_7] [i_7] [i_7] [i_7]) / (arr_27 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_7]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_6 - 1] [i_6 - 1] [i_6])) / (((/* implicit */int) arr_17 [i_6 + 1] [i_7] [i_1])))))));
                        var_27 = ((/* implicit */long long int) max((var_3), (((/* implicit */int) ((min((var_9), (((/* implicit */long long int) var_13)))) > (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_7]))))))));
                        arr_30 [i_1] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_11))))));
                        arr_31 [i_1] [(_Bool)1] [i_1] [(_Bool)1] [i_1] = var_4;
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    for (int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        {
                            arr_41 [i_1] [10U] [i_1] [i_8] = ((long long int) 17121550667774603171ULL);
                            var_28 = ((/* implicit */short) var_5);
                        }
                    } 
                } 
            } 
        }
        arr_42 [i_1] [3] = ((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) (_Bool)1))), (((unsigned char) 330479016))));
    }
}
