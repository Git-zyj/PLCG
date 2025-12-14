/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183180
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
    var_16 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)214)))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)42), (((/* implicit */unsigned char) (signed char)-69))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) max(((signed char)110), ((signed char)-69))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_4)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */int) min((var_18), (((var_3) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) var_11))))));
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [9LL] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))));
        /* LoopSeq 3 */
        for (int i_4 = 1; i_4 < 23; i_4 += 4) 
        {
            var_21 += ((/* implicit */signed char) (!((_Bool)1)));
            var_22 = ((/* implicit */signed char) ((var_3) ? (arr_9 [i_0] [8LL] [i_4] [i_4] [i_4 - 1] [i_0]) : (arr_9 [2] [i_4] [i_4] [i_4] [i_4 + 1] [i_0])));
            var_23 = (~(((/* implicit */int) (unsigned char)42)));
        }
        for (long long int i_5 = 1; i_5 < 23; i_5 += 2) 
        {
            var_24 = (+(arr_0 [i_5 + 1]));
            var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)147))));
        }
        for (signed char i_6 = 2; i_6 < 23; i_6 += 1) 
        {
            var_26 &= ((/* implicit */long long int) (_Bool)1);
            arr_19 [(unsigned char)16] [(unsigned char)16] = ((/* implicit */signed char) (~(arr_4 [i_6 - 2] [i_6 + 1])));
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    for (long long int i_9 = 2; i_9 < 22; i_9 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) arr_5 [13LL] [i_6 - 2] [i_7]))));
                            arr_26 [i_0] [i_0] [i_7] [i_0] [i_9] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)42))))) ? (arr_9 [i_9] [i_8] [i_8] [i_8] [i_6] [(_Bool)1]) : (((/* implicit */int) var_9))));
                            var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) -50493154))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    {
                        var_29 *= (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_0] [i_0] [(signed char)10]))))));
                        var_30 = (-((((_Bool)1) ? (-2147483637) : (((/* implicit */int) (unsigned char)8)))));
                        var_31 = ((/* implicit */signed char) ((long long int) arr_1 [i_6 - 1]));
                    }
                } 
            } 
        }
    }
    var_32 = ((/* implicit */signed char) var_7);
}
