/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132536
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
    var_14 = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (((var_8) ^ (((/* implicit */unsigned long long int) var_2))))))));
    var_15 = ((short) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) var_11);
                    var_16 = ((/* implicit */unsigned char) var_4);
                }
            } 
        } 
        var_17 -= ((unsigned int) (+(((/* implicit */int) var_12))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((var_10), (((/* implicit */long long int) (~(min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (var_6)))))))))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0] [i_0]))) : (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)3)) : (-9))), ((~(622867095)))))));
    }
    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_20 |= ((/* implicit */int) max((((/* implicit */unsigned char) var_7)), ((unsigned char)153)));
        var_21 = ((/* implicit */unsigned int) min((((((var_10) == (((/* implicit */long long int) arr_13 [i_3])))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((7761336213780155434LL) == (((/* implicit */long long int) var_6)))))))), (((/* implicit */long long int) ((arr_12 [i_3]) & (((/* implicit */int) var_11)))))));
        arr_14 [i_3] [i_3] = (+(var_5));
    }
    for (short i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_6 [i_4])), (var_8)));
        var_23 = ((/* implicit */unsigned char) ((unsigned int) 63));
        arr_18 [i_4] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (16383) : ((+(((/* implicit */int) arr_1 [i_4])))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_5 = 1; i_5 < 10; i_5 += 3) 
    {
        arr_23 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) && (((/* implicit */_Bool) (-(((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
        var_24 = ((/* implicit */signed char) var_0);
        var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((~(arr_4 [i_5 - 1]))), (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) var_11))))))))));
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */int) max(((signed char)-22), ((signed char)-1)))) ^ (((((/* implicit */int) (short)-19484)) | (-1472827049))))))));
        var_27 = ((/* implicit */short) min(((~(-947466947))), (((/* implicit */int) (signed char)1))));
    }
}
