/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132070
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
    var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)88)), (var_1)))), ((+(((/* implicit */int) var_2)))))) : (((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) max(((+(var_9))), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_8)))))))))))));
            var_17 = ((/* implicit */signed char) var_8);
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) max((arr_0 [i_1 - 1] [i_1 + 2]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 2]))))))))));
        }
        for (short i_2 = 1; i_2 < 22; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 2; i_3 < 21; i_3 += 1) 
            {
                for (signed char i_4 = 1; i_4 < 21; i_4 += 4) 
                {
                    {
                        arr_14 [i_0] [i_0] [(unsigned short)16] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) ((_Bool) ((long long int) arr_8 [i_0] [i_2] [i_2] [(_Bool)1])));
                        arr_15 [(short)16] |= ((/* implicit */short) ((((((562941363486720LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (short)14833)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_2]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6984560150573293683LL))))) : (((/* implicit */int) var_10)))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_0]))));
        }
        for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
        {
            var_20 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) : (-6984560150573293684LL))))))));
            arr_19 [i_5] [i_0] = ((/* implicit */int) var_8);
            /* LoopNest 3 */
            for (signed char i_6 = 2; i_6 < 21; i_6 += 1) 
            {
                for (signed char i_7 = 1; i_7 < 21; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_21 ^= ((/* implicit */signed char) arr_5 [i_0]);
                            var_22 = ((/* implicit */short) var_1);
                            var_23 *= ((/* implicit */int) max((((/* implicit */long long int) ((signed char) var_14))), (((long long int) ((short) arr_8 [(short)4] [i_5] [i_5] [i_5])))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_8))));
                            var_25 = ((long long int) min((((/* implicit */long long int) ((_Bool) arr_24 [i_0] [i_6] [i_0] [i_0]))), (var_0)));
                        }
                    } 
                } 
            } 
        }
        arr_27 [i_0] = ((/* implicit */int) var_0);
    }
}
