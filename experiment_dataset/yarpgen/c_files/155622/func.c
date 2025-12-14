/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155622
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [(unsigned short)0] [i_0])) ? (arr_11 [i_0] [i_0] [i_0] [i_2 + 1] [i_3] [i_3]) : (arr_11 [i_3] [i_2 - 1] [i_1] [i_1 - 2] [i_0] [i_0])))) ? (4197458650194009247ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [4ULL] [i_0] [i_1])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 2] [(unsigned short)9] [2U]))))) : (arr_0 [i_1]));
                            arr_12 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) arr_4 [i_0]);
                            var_20 -= ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_1 [i_1] [i_0])), (4197458650194009276ULL))), ((+(14249285423515542368ULL)))));
                            var_21 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) (unsigned char)201)), (max(((short)-15924), (((/* implicit */short) var_17)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned short i_5 = 1; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) (unsigned char)129);
                            var_23 = ((/* implicit */short) min((((/* implicit */signed char) (_Bool)0)), (var_7)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 3; i_9 < 18; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) ((((int) arr_21 [i_7 - 2])) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)201)))))));
                                var_25 = ((/* implicit */short) (+((-(((/* implicit */int) ((short) (unsigned char)201)))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) (+(((unsigned int) arr_29 [i_7 - 1] [i_7] [6U]))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) (-((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) : (var_14)))));
    /* LoopSeq 2 */
    for (signed char i_11 = 0; i_11 < 13; i_11 += 1) 
    {
        var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)8903))));
        var_29 = ((/* implicit */signed char) (-(min((arr_29 [i_11] [i_11] [i_11]), (arr_29 [i_11] [i_11] [i_11])))));
    }
    for (short i_12 = 0; i_12 < 22; i_12 += 4) 
    {
        var_30 = ((/* implicit */short) (+(arr_35 [i_12])));
        arr_36 [i_12] = ((/* implicit */unsigned char) arr_34 [i_12] [(short)4]);
        var_31 &= ((/* implicit */_Bool) min(((+(13289216457011839489ULL))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))) / (8528698814497011553ULL)))))));
        arr_37 [i_12] = ((/* implicit */_Bool) max((((long long int) (unsigned char)2)), (((/* implicit */long long int) ((unsigned char) arr_35 [i_12])))));
    }
    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) & (max((((/* implicit */unsigned long long int) (unsigned char)162)), (var_9)))))) ? ((-(((/* implicit */int) (short)-31945)))) : (((/* implicit */int) var_11))));
}
