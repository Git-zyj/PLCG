/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160262
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) (-((~(arr_0 [i_0])))));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [2LL]))))))) == (((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned char)2] [i_0]))))))))))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((unsigned long long int) var_12)) + (((((/* implicit */_Bool) var_11)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_5))))))) ? ((~(arr_0 [i_0]))) : (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_17 = (!(((/* implicit */_Bool) (~(arr_0 [i_0])))));
            arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (((!((!(((/* implicit */_Bool) 17680493631231225046ULL)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-23473))))) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_1) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))))) && (((/* implicit */_Bool) ((long long int) arr_0 [10])))))))));
            var_18 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) ((var_5) + (((/* implicit */long long int) arr_3 [i_1]))))))), ((!(var_14)))));
        }
    }
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    arr_15 [i_2] = ((/* implicit */int) ((273101425) >= (((/* implicit */int) (_Bool)1))));
                    var_19 &= ((/* implicit */short) var_12);
                    var_20 &= ((/* implicit */unsigned short) arr_12 [i_4] [i_2] [3LL] [i_2]);
                }
            } 
        } 
        var_21 = (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)106)) ? (arr_10 [i_2]) : (((/* implicit */int) var_12))))) || (((/* implicit */_Bool) max((2202048776387297026LL), (((/* implicit */long long int) var_14)))))))));
        arr_16 [12] [12] &= ((/* implicit */unsigned char) ((unsigned long long int) 0ULL));
    }
    for (int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        var_22 = ((_Bool) ((((/* implicit */int) ((unsigned char) var_2))) % (((/* implicit */int) var_4))));
        var_23 = ((/* implicit */int) max((((/* implicit */long long int) (~((+(((/* implicit */int) var_0))))))), (((arr_19 [i_5]) ? (arr_9 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
        var_24 = ((/* implicit */unsigned char) ((max((arr_10 [i_5]), (arr_10 [i_5]))) + (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (arr_10 [i_5]))))));
    }
    var_25 = ((/* implicit */unsigned char) var_7);
}
