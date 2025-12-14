/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116609
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
    var_19 = ((/* implicit */unsigned int) var_6);
    var_20 = ((/* implicit */signed char) (short)11793);
    var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) (+(max((((/* implicit */long long int) (short)16352)), (72057593769492480LL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_9)) : (var_11)))) && (((/* implicit */_Bool) ((long long int) (short)-16353)))))) : (max((((/* implicit */int) var_4)), (max((((/* implicit */int) var_6)), (var_9)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned short)6] [i_3])) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (15381412820965180674ULL)))) ? ((~(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 1])))));
                        var_23 = ((/* implicit */int) ((unsigned long long int) (-(16568299562385352762ULL))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_5))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned short) ((unsigned long long int) arr_2 [i_0]));
        var_26 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (6822049044954384781ULL)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [7ULL])) >= (((/* implicit */int) arr_12 [i_4])))))));
        arr_13 [i_4] [13LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4])))));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            {
                var_28 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_17)), (arr_14 [i_6] [i_5])))), (min((((/* implicit */unsigned long long int) arr_14 [i_5] [i_5])), (var_2))))), (((/* implicit */unsigned long long int) arr_16 [i_5]))));
                var_29 = ((/* implicit */short) max((((long long int) ((unsigned int) var_16))), (((/* implicit */long long int) ((unsigned int) 2147483647)))));
            }
        } 
    } 
}
