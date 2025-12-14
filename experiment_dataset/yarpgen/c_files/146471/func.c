/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146471
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        {
                            arr_13 [i_2] = ((/* implicit */int) var_9);
                            var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))));
                            arr_14 [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1127295896585576501ULL)) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : (((/* implicit */int) (short)4064))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (396003049U)));
                            arr_15 [i_2] [(short)13] [i_3] = (~(arr_4 [i_0] [(unsigned short)9] [i_1]));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    {
                        var_12 = ((/* implicit */short) min((var_12), (arr_2 [i_0])));
                        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) arr_8 [i_0] [i_1] [(short)14]))));
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) arr_9 [i_0] [i_0])))))))));
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_8 [i_0] [i_1] [i_6]))));
                        var_16 ^= ((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_1] [i_0] [i_1] [i_6]);
                    }
                } 
            } 
        }
        for (int i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
        {
            arr_25 [i_0] &= arr_9 [0LL] [i_0];
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 3) 
            {
                for (unsigned int i_9 = 1; i_9 < 19; i_9 += 3) 
                {
                    {
                        arr_31 [i_0] [i_7] [i_7] [i_9] [i_0] [i_7] = ((/* implicit */unsigned short) min((arr_16 [i_9] [i_9 + 1] [i_9]), (((/* implicit */unsigned int) ((unsigned short) arr_23 [i_9 - 1] [(unsigned char)9] [i_8 + 2])))));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((unsigned char) ((((/* implicit */_Bool) (short)5191)) ? (18347702135600174937ULL) : (((/* implicit */unsigned long long int) 7890705606685671531LL)))))));
                        arr_32 [i_0] [i_0] [i_8 - 1] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)4064))))) : (max((arr_16 [i_7] [i_8 - 1] [i_9]), (((/* implicit */unsigned int) (short)1023))))));
                    }
                } 
            } 
            arr_33 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((short) 99041938109376665ULL))) <= (min((((((/* implicit */int) arr_10 [i_0] [(_Bool)0] [i_0] [i_0])) % (((/* implicit */int) arr_10 [i_0] [i_0] [i_7] [i_0])))), (((/* implicit */int) ((_Bool) arr_28 [i_7] [i_7] [i_0])))))));
            var_18 ^= ((/* implicit */short) ((18347702135600174937ULL) >> (((((/* implicit */int) (short)5350)) - (5340)))));
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(((/* implicit */int) ((short) (short)4064))))))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
        {
            var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_19 [(short)15] [i_10] [(short)15] [i_10])) : (((/* implicit */int) arr_30 [i_10] [i_0] [i_10] [i_10] [i_0]))));
            arr_36 [i_10] = ((/* implicit */unsigned short) arr_4 [i_0] [i_10] [i_10]);
            var_21 = ((/* implicit */unsigned long long int) arr_22 [i_10] [(signed char)3] [i_10]);
        }
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            arr_39 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0] [i_11] [i_0] [i_0]);
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_12 [i_0] [i_0] [i_11] [(signed char)12] [i_0]))));
        }
        var_23 = ((/* implicit */unsigned short) min(((-(169817721))), ((-(-169817720)))));
    }
    var_24 = ((/* implicit */signed char) var_2);
    var_25 &= var_7;
}
