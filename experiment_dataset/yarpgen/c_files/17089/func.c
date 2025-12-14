/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17089
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
    var_20 = ((/* implicit */short) var_11);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_21 = ((/* implicit */long long int) arr_0 [i_0] [(short)7]);
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) 9888871030209850282ULL)) ? (min((8557873043499701323ULL), (((/* implicit */unsigned long long int) (unsigned char)24)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) 0U)) ? (9888871030209850282ULL) : (9888871030209850283ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_1 [i_0]))))))))) ? ((~(((/* implicit */int) ((short) var_14))))) : ((-((-(((/* implicit */int) var_11)))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) min((var_4), (arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_22 -= ((/* implicit */unsigned char) (unsigned short)4);
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_1 [i_0]);
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((((_Bool)1) || (((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) 9888871030209850282ULL)))))) && (((min((arr_5 [i_1]), (arr_5 [i_0]))) && ((!(((/* implicit */_Bool) var_17))))))));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_23 = max(((+(((/* implicit */int) (unsigned short)11)))), (((((/* implicit */int) (short)14477)) / (((int) (signed char)72)))));
        var_24 = ((/* implicit */unsigned short) ((arr_9 [i_2] [i_2]) > (((/* implicit */int) ((unsigned short) var_4)))));
        arr_12 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (arr_9 [i_2] [i_2]) : (var_17)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            arr_17 [i_3] = ((/* implicit */long long int) ((short) (signed char)118));
            /* LoopSeq 3 */
            for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                var_25 += ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_3]))) & (8557873043499701302ULL)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
                {
                    arr_23 [i_3] [i_3] = ((int) 8557873043499701319ULL);
                    arr_24 [i_3] = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) var_7)) - (((/* implicit */int) (short)27474)))));
                }
                var_26 = (unsigned short)0;
            }
            for (int i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    arr_30 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)-67)))) ^ (((/* implicit */int) ((_Bool) -8925701113760002531LL)))));
                    arr_31 [(_Bool)1] [i_3] [i_2] = ((/* implicit */long long int) ((int) 4294967287U));
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        arr_35 [i_3] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)16)) : (arr_21 [i_2])))) || ((_Bool)1)));
                        arr_36 [i_2] [i_3] [i_3] [i_3] [i_8] = ((/* implicit */long long int) var_11);
                        var_27 += ((/* implicit */signed char) ((unsigned short) ((signed char) arr_29 [4] [(signed char)0] [i_8])));
                    }
                }
                arr_37 [i_2] [i_3] [i_3] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
                arr_38 [i_3] [i_3] = ((/* implicit */int) (unsigned short)65534);
            }
            for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 1) 
            {
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [(short)19] [i_3] [i_3])) ? (((((/* implicit */_Bool) var_8)) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) 8557873043499701319ULL)) ? (((/* implicit */unsigned long long int) var_17)) : (var_12)))));
                var_29 = ((/* implicit */long long int) arr_28 [(_Bool)1] [i_3] [(signed char)0] [(_Bool)1]);
            }
        }
    }
}
