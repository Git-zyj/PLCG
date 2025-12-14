/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188836
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 &= ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_0 [i_0])) >> (((/* implicit */int) (unsigned short)21))))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) != (arr_6 [i_2] [i_2] [(_Bool)1] [(_Bool)1])));
                    var_16 = ((/* implicit */unsigned int) max((min((arr_3 [i_0]), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_0])))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (3499069429U))));
        var_18 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((((/* implicit */_Bool) 20U)) ? (var_5) : (((/* implicit */unsigned long long int) var_6))))))) ? (((/* implicit */unsigned int) var_4)) : (((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) var_12))))) ? (((((/* implicit */unsigned int) arr_2 [i_0])) / (var_3))) : (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
        var_19 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        arr_9 [i_3] = arr_3 [i_3];
        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967276U)) ? (arr_3 [i_3]) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned short)65535)))))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)3584)) ? (((/* implicit */int) (!(((_Bool) arr_3 [i_3]))))) : (((/* implicit */int) ((-8367684685192641575LL) <= (((/* implicit */long long int) arr_7 [i_3])))))));
                    var_22 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (2401385475U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1])))))) ? (((/* implicit */int) (short)-8393)) : (((/* implicit */int) arr_14 [i_4] [i_4] [i_3])))), (((((/* implicit */int) ((-8749697291974982126LL) == (((/* implicit */long long int) ((/* implicit */int) var_13)))))) % (-1215085)))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_24 [i_6] [i_7] [i_8])), (3659837665U)))) ? (((/* implicit */int) max((arr_24 [i_6] [i_6] [i_6]), (((/* implicit */unsigned short) arr_22 [8U] [i_7] [i_8]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_8] [(unsigned short)8] [i_6])) || (((/* implicit */_Bool) arr_24 [i_6] [i_7] [i_8])))))));
                    var_24 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((int) 2147483647))) ? (arr_23 [i_8] [i_7] [i_6]) : (max((arr_3 [i_6]), (((/* implicit */unsigned long long int) var_1))))))));
                    var_25 = ((/* implicit */unsigned long long int) var_2);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_6 [i_9] [i_9] [i_9] [i_11])) ? (min((-2147483647), (((/* implicit */int) arr_14 [i_9] [i_10] [i_11])))) : (((((/* implicit */_Bool) 576460752303422464LL)) ? (((/* implicit */int) (unsigned short)53546)) : (-413984925)))))));
                    var_27 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_30 [i_11])))) : (((((/* implicit */_Bool) arr_3 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_5))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_27 [i_9] [i_10] [i_10])) : ((-(arr_6 [i_9] [i_9] [i_9] [i_11]))))))));
                }
            } 
        } 
    } 
}
