/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167283
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) arr_1 [(_Bool)1])), (arr_2 [i_0]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3501068761U)) || (((/* implicit */_Bool) var_2)))))) == (arr_4 [i_2 + 1] [i_0] [i_0 + 1]))))));
                    arr_12 [(short)14] [(unsigned char)12] [(unsigned char)12] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) -16LL)) ? (3501068782U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16256)))));
                    var_19 = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */long long int) var_12)), (((((/* implicit */_Bool) 793898534U)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [(signed char)1]))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (+(arr_10 [i_0])))) ? ((~(arr_2 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)188)), (var_3)))))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_3])))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    {
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(((/* implicit */int) (unsigned short)17816)))))));
                        var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) arr_4 [i_3] [i_5] [i_5]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_30 [i_7] [i_7] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)93)) << (((((/* implicit */int) arr_23 [(_Bool)1])) - (9665)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (short)16764))));
                    var_24 -= var_3;
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            {
                                arr_35 [i_10] [i_7] [i_8] [i_7] [i_3] &= ((/* implicit */short) (~(((/* implicit */int) (unsigned char)77))));
                                arr_36 [i_8] [3] [i_8] = ((/* implicit */short) var_3);
                                var_25 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_8] [i_8] [i_10])) <= (((/* implicit */int) (unsigned char)45)))))) >= (var_0));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned int) var_10);
    var_27 = ((/* implicit */_Bool) max((var_27), ((_Bool)1)));
    var_28 = ((/* implicit */short) (~(((/* implicit */int) var_17))));
    var_29 = ((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)1)), (1056964608)));
}
