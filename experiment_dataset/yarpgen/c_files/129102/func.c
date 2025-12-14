/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129102
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 *= ((/* implicit */unsigned int) ((long long int) max((arr_5 [i_1 + 2] [i_0 - 1] [i_0 - 1] [i_0]), (arr_5 [i_1 + 2] [(short)5] [i_1] [i_1]))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) arr_1 [i_0] [(_Bool)1])))))) ? (199508996U) : (3591556171U)));
                    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_0] [6U]))));
                    arr_7 [i_0] [(unsigned short)3] [(_Bool)1] = ((/* implicit */long long int) (unsigned short)50604);
                    var_19 = ((/* implicit */_Bool) (unsigned short)34288);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_6);
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) var_14))))) ? (((/* implicit */int) ((short) -4817683781242988453LL))) : (((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_15))))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 3) 
    {
        arr_10 [(signed char)4] = ((/* implicit */unsigned char) (unsigned short)31271);
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned short)16256), ((unsigned short)65535)))) + (((((/* implicit */int) (signed char)5)) - (((/* implicit */int) (signed char)5)))))))));
        var_23 += ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_9 [i_3 + 1])), (arr_8 [i_3 + 2])))) ? (((((/* implicit */_Bool) arr_9 [i_3 - 1])) ? (arr_8 [i_3 + 1]) : (arr_8 [i_3 + 2]))) : (min((((/* implicit */unsigned int) arr_9 [i_3 + 1])), (arr_8 [i_3 + 1])))));
    }
    for (unsigned int i_4 = 1; i_4 < 18; i_4 += 2) 
    {
        arr_13 [0ULL] = ((max((arr_8 [i_4 + 1]), (((/* implicit */unsigned int) arr_9 [(short)13])))) + (((/* implicit */unsigned int) ((arr_11 [i_4 + 1] [i_4 - 1]) + (((/* implicit */int) ((((/* implicit */long long int) 2147483647)) == (4817683781242988453LL))))))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            for (unsigned short i_6 = 1; i_6 < 19; i_6 += 3) 
            {
                {
                    var_24 = ((/* implicit */short) ((_Bool) -807468884));
                    arr_18 [i_4] [i_6] = arr_14 [15ULL];
                }
            } 
        } 
    }
}
