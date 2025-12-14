/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18597
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
    var_18 += ((/* implicit */long long int) min(((short)-27059), ((short)13140)));
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned short) max((((/* implicit */long long int) var_11)), (min((((/* implicit */long long int) var_2)), (var_12)))))))));
    var_20 -= ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_0 [i_0]))) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])));
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 16; i_1 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (-(3280613686U))))));
            var_23 |= ((/* implicit */signed char) ((long long int) arr_3 [i_1 - 2] [i_1] [i_1 - 2]));
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (-(((/* implicit */int) ((short) arr_1 [i_0] [16ULL]))))))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((unsigned short) arr_6 [i_1 + 2] [i_1 + 2] [i_2] [i_2])))));
                        var_26 -= ((/* implicit */short) ((((/* implicit */int) ((_Bool) 10202754736570727106ULL))) >> (((((arr_5 [i_0]) << (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])))) - (13861118614867673063ULL)))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
        }
        for (short i_4 = 2; i_4 < 16; i_4 += 3) /* same iter space */
        {
            var_28 ^= ((/* implicit */long long int) (short)27061);
            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) arr_3 [i_0] [i_0] [i_4]))));
            arr_12 [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
        }
        for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            var_30 = ((/* implicit */unsigned int) (-(arr_14 [i_0] [i_5])));
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) arr_4 [i_5] [i_0] [i_5] [i_5]))));
            /* LoopSeq 1 */
            for (short i_6 = 3; i_6 < 17; i_6 += 3) 
            {
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((unsigned long long int) arr_16 [i_6 - 1])))));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    var_33 = ((/* implicit */int) min((var_33), (((((((/* implicit */int) (short)-27059)) + (2147483647))) >> (((((/* implicit */int) (short)27061)) - (27053)))))));
                    var_34 *= ((/* implicit */unsigned long long int) ((unsigned char) ((arr_8 [i_0]) ? (arr_3 [i_0] [i_6 - 3] [i_7]) : (arr_3 [10U] [i_6 - 1] [10U]))));
                    arr_21 [i_0] [i_5] [i_5] [i_6 + 2] [i_7] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0] [i_5] [i_5] [i_7])) ? (((/* implicit */int) arr_10 [i_6] [i_6 - 1])) : (arr_4 [i_6 + 2] [i_5] [i_5] [i_6 - 3])));
                }
            }
            arr_22 [i_5] = ((/* implicit */int) ((arr_9 [i_0] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
        }
        var_35 = ((/* implicit */long long int) arr_2 [i_0]);
    }
    var_36 = (+(((((/* implicit */_Bool) min((var_14), (((/* implicit */int) (signed char)55))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-27084)) : (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) (unsigned short)12490)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15)))))));
}
