/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105097
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
    var_16 = ((/* implicit */unsigned char) var_5);
    var_17 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) (unsigned char)193)) : (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (min((((/* implicit */long long int) var_6)), (var_13)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        var_18 = ((var_15) ? ((-(var_4))) : ((~(arr_1 [i_0] [(unsigned char)16]))));
        /* LoopSeq 4 */
        for (short i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((-(arr_0 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
            arr_4 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 3] [i_1 - 1])) ? (((/* implicit */int) var_1)) : (arr_3 [i_1 - 1] [i_1 + 1])));
            var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) var_10))));
        }
        for (signed char i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3252734689665693788ULL)) ? (((((/* implicit */int) (short)-19210)) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
            var_22 = arr_1 [i_2] [i_0];
        }
        for (signed char i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
        {
            var_23 &= ((/* implicit */unsigned int) (signed char)-41);
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) var_11))));
            var_25 = ((/* implicit */int) max((var_25), ((~(((((/* implicit */int) (short)-21868)) / (((/* implicit */int) (signed char)-82))))))));
        }
        for (unsigned int i_4 = 3; i_4 < 22; i_4 += 1) 
        {
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) var_5));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (unsigned short i_6 = 1; i_6 < 23; i_6 += 4) 
                {
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] = (+(var_9));
                        var_26 ^= ((/* implicit */short) ((arr_12 [i_6] [i_5] [i_0]) ? ((~(((/* implicit */int) var_3)))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_3))))));
                    }
                } 
            } 
            arr_21 [i_4] = ((/* implicit */_Bool) 4216661345U);
            /* LoopSeq 2 */
            for (unsigned short i_7 = 1; i_7 < 22; i_7 += 4) 
            {
                arr_24 [i_0] [i_7] [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0] [i_4 - 1]);
                arr_25 [i_0] [i_4 + 1] [i_0] &= ((/* implicit */_Bool) ((short) arr_7 [i_7 - 1] [14LL] [i_7 - 1]));
                var_27 = ((short) arr_1 [i_7] [i_4]);
            }
            for (signed char i_8 = 1; i_8 < 22; i_8 += 4) 
            {
                var_28 = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_8]);
                var_29 += ((/* implicit */short) (~(arr_3 [i_4] [i_8])));
                var_30 = ((/* implicit */long long int) max((var_30), (-1778561901382399019LL)));
                arr_29 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_0] [i_4 - 2] [8] [i_4 - 2]))))) ? (arr_26 [i_0] [i_4 + 1] [i_0] [i_8 + 1]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [i_4] [i_4])))))));
                arr_30 [(unsigned short)9] [i_4] [i_0] [i_4 - 1] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (arr_27 [i_8 + 1] [i_4 - 3] [i_4 - 2] [i_0])));
            }
        }
    }
    for (short i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_10 = 1; i_10 < 23; i_10 += 4) 
        {
            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)160)) : (-485429702)))) : (((((/* implicit */_Bool) arr_35 [i_9])) ? (min((2055339905142631169LL), (((/* implicit */long long int) var_14)))) : (((((/* implicit */_Bool) var_1)) ? (2272342181545230500LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
            arr_37 [i_9] [i_10 - 1] = ((/* implicit */short) var_8);
            var_32 += ((/* implicit */unsigned long long int) arr_19 [i_9] [i_10 - 1]);
        }
        var_33 = ((((/* implicit */_Bool) arr_16 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21867))) : (arr_27 [i_9] [i_9] [i_9] [i_9]));
    }
    var_34 = ((/* implicit */unsigned long long int) var_5);
}
