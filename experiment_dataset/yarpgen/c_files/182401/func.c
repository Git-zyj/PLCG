/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182401
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
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_5 [i_1] = var_2;
            /* LoopSeq 2 */
            for (int i_2 = 1; i_2 < 17; i_2 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 4; i_3 < 18; i_3 += 2) 
                {
                    for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] [i_3 - 4] [i_4] = ((/* implicit */unsigned char) max((var_7), (((/* implicit */unsigned long long int) var_6))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4 - 1] = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) var_12)) : (2386629636U)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 - 1])) - ((+(((/* implicit */int) var_4))))))) : (min(((-(var_5))), (((/* implicit */long long int) (~(var_12)))))));
                        }
                    } 
                } 
                var_15 ^= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [15] [i_0]))))) & (((/* implicit */int) var_4))));
            }
            for (int i_5 = 1; i_5 < 17; i_5 += 2) /* same iter space */
            {
                arr_18 [i_0 - 2] [i_0 - 1] [i_0] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_5 - 1] [i_0 - 2]))));
                var_16 &= ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) var_4)))));
            }
        }
        for (int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                var_18 = ((/* implicit */int) (~(min((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6] [i_6]))) - (var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11))))))));
                var_19 += ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_1 [i_6] [i_7]))))));
            }
            var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-1489992558) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_8)) : (var_13)));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 3; i_9 < 17; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_31 [i_10] = ((/* implicit */unsigned long long int) var_9);
                        var_21 = ((/* implicit */signed char) (-(((/* implicit */int) arr_17 [i_0 - 1] [(unsigned char)12] [i_10]))));
                        arr_32 [i_10] [i_10] = ((/* implicit */unsigned char) var_9);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
                {
                    {
                        var_22 = ((((/* implicit */_Bool) arr_25 [i_0 - 1])) ? (arr_25 [i_0 - 2]) : (var_13));
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 2; i_13 < 18; i_13 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((signed char) arr_23 [i_0] [i_8]));
                            arr_40 [i_0 - 1] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_16 [i_13] [i_12] [i_0]) > (((/* implicit */long long int) var_11)))))) : (arr_23 [i_0 + 1] [i_0 - 2])));
                            arr_41 [i_11] [i_8] [i_11] [0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (var_11)))) * (((/* implicit */int) ((_Bool) var_7)))));
                        }
                    }
                } 
            } 
            arr_42 [i_0] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */long long int) -1489992558)) % (-1133824470421488951LL)));
        }
        arr_43 [i_0] = ((/* implicit */int) var_10);
        var_24 ^= ((/* implicit */short) max((((/* implicit */long long int) ((unsigned int) ((long long int) var_3)))), (((long long int) (-(var_12))))));
        var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((var_8), (((/* implicit */short) arr_33 [(unsigned char)16]))))) + (2147483647))) << ((((((((~(1644575564))) + (2147483647))) << (((min((((/* implicit */long long int) var_2)), (arr_16 [i_0] [i_0] [i_0]))) - (1695256349LL))))) - (502908082)))));
    }
    var_26 += ((/* implicit */signed char) (-(min((max((((/* implicit */int) var_6)), (var_9))), (var_0)))));
}
