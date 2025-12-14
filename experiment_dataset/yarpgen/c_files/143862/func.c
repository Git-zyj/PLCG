/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143862
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
    var_19 = ((/* implicit */signed char) max(((-((+(var_8))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)5601)))))));
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~(((/* implicit */int) max(((short)-17155), (((/* implicit */short) (signed char)110)))))))), (max(((+(var_6))), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)43200)), (1433192313))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-22876)))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 14; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) (~((-(arr_1 [i_2])))));
                        arr_12 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0])))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        var_23 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (short)32746))))));
    }
    for (signed char i_4 = 2; i_4 < 15; i_4 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) max(((-(max((((/* implicit */int) var_13)), (arr_1 [i_4]))))), (((/* implicit */int) max(((!(((/* implicit */_Bool) (short)-22876)))), ((!(((/* implicit */_Bool) (short)-22876)))))))));
        arr_15 [i_4] = ((/* implicit */unsigned char) max((min((max((((/* implicit */unsigned int) (short)22876)), (arr_10 [16U] [i_4] [i_4 - 1] [i_4] [3]))), ((+(arr_14 [(signed char)13] [i_4]))))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 1732829674U)))))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 14; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                {
                    var_25 |= ((/* implicit */short) min((1146760085U), (2562137621U)));
                    arr_22 [i_4 - 1] [(signed char)10] |= ((/* implicit */signed char) max((max((min((var_10), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))))), ((-(min((var_10), (((/* implicit */unsigned int) var_17))))))));
                    arr_23 [i_4] [(short)9] [i_6] = ((/* implicit */short) (-(max(((-(((/* implicit */int) var_5)))), ((+(-1757240844)))))));
                }
            } 
        } 
        var_26 |= ((/* implicit */_Bool) (+((+(min((arr_10 [4] [11] [i_4] [i_4] [1LL]), (var_6)))))));
    }
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        arr_27 [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((+(1732829657U))), (min((arr_24 [i_7 + 1]), (((/* implicit */unsigned int) arr_26 [i_7] [(unsigned char)2])))))))));
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((unsigned short)7189), (((/* implicit */unsigned short) (short)-21006)))))))), (max((min((arr_24 [i_7 + 1]), (((/* implicit */unsigned int) var_3)))), (max((arr_24 [i_7]), (((/* implicit */unsigned int) var_15)))))))))));
    }
    /* vectorizable */
    for (signed char i_8 = 1; i_8 < 15; i_8 += 2) 
    {
        var_28 = (-((-(((/* implicit */int) arr_29 [i_8 - 1] [i_8])))));
        arr_31 [i_8] = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_26 [(short)9] [i_8]))))));
        var_29 = ((/* implicit */signed char) (+((~(1146760085U)))));
        arr_32 [13U] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_7))))));
    }
}
