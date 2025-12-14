/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129802
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = arr_5 [i_0];
                    arr_10 [i_0] [i_1] = ((/* implicit */long long int) var_12);
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) * (min((0ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [(unsigned short)0]))))));
        arr_12 [i_0] = ((/* implicit */unsigned char) var_7);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            var_17 -= var_14;
            arr_15 [i_0] [i_3] [i_3] = ((/* implicit */short) (~(((/* implicit */int) var_14))));
            arr_16 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) var_14);
        }
        for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 1) 
        {
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_0) + (9223372036854775807LL))) >> (((var_16) + (651114998)))))) ? (var_16) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-5))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 3) 
                {
                    {
                        arr_25 [i_6] [i_4] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) var_5)), (var_0))) * (((long long int) (short)0))))) ? (var_8) : (min((((/* implicit */long long int) min(((unsigned char)16), (((/* implicit */unsigned char) (_Bool)1))))), (9223372036854775807LL)))));
                        var_19 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) var_14)) | (((/* implicit */int) arr_22 [i_0] [i_4] [i_5] [i_6])))));
                        var_20 = ((/* implicit */unsigned char) (-(((long long int) (!(((/* implicit */_Bool) -9223372036854775790LL)))))));
                    }
                } 
            } 
        }
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((unsigned char) ((short) arr_13 [i_0]))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        for (unsigned char i_8 = 2; i_8 < 20; i_8 += 1) 
        {
            {
                arr_30 [i_8] = ((/* implicit */long long int) var_15);
                var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_2)))) % (var_7)));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((1525835172U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33345)))));
    var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65528)));
}
