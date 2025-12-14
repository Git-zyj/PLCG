/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127778
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
    var_13 = ((/* implicit */int) var_4);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103))) - (0ULL)))));
            arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 + 3])) - (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) max((2899065320U), (((/* implicit */unsigned int) (short)-31514))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (((((/* implicit */unsigned int) -1877880080)) - (4078433581U))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-20198)), (arr_1 [i_0])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)0))))) : ((+(arr_1 [i_0])))))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_2 = 3; i_2 < 22; i_2 += 3) 
        {
            var_14 = min((((/* implicit */unsigned int) ((int) max((2971022964U), (4294967270U))))), (((unsigned int) ((1706455381) & (((/* implicit */int) var_6))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_3 = 1; i_3 < 23; i_3 += 2) 
            {
                var_15 = ((/* implicit */int) (+(((unsigned long long int) (_Bool)1))));
                /* LoopSeq 2 */
                for (int i_4 = 3; i_4 < 23; i_4 += 4) /* same iter space */
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) (unsigned short)54064))));
                    var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)123))));
                    var_18 = ((/* implicit */unsigned int) (((_Bool)1) ? (((int) 7602643936229664968LL)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) (unsigned short)8580)) : (((/* implicit */int) var_4))));
                }
                for (int i_5 = 3; i_5 < 23; i_5 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        arr_17 [i_3] [i_2 + 2] [(_Bool)1] [i_0] [i_2 + 2] = ((/* implicit */short) (~(((/* implicit */int) arr_15 [(unsigned short)1] [i_0 - 1] [i_0 + 4] [i_0] [i_5 - 3]))));
                        arr_18 [i_2 + 1] [i_2 + 1] [i_0] = ((/* implicit */unsigned char) ((short) 7985670273794214170ULL));
                        var_20 = ((/* implicit */int) arr_1 [i_6]);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_0 - 1] [i_2 + 2] [i_3 - 1] [i_0] [i_3 + 1] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (short)5652))));
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) 1860516219U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_1)))));
                        arr_24 [11LL] [i_0 + 1] [11LL] [i_0] [i_5] [i_5] [i_7] = (!(((/* implicit */_Bool) (unsigned char)0)));
                        var_22 = ((/* implicit */_Bool) ((-5938825733028350009LL) - (((/* implicit */long long int) var_5))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_23 &= ((/* implicit */long long int) ((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        arr_27 [i_0] [i_0] [i_0 - 2] [i_0 + 2] [i_0] = ((/* implicit */int) (unsigned char)112);
                    }
                    var_24 = ((/* implicit */_Bool) ((1314756977) + (-1517793993)));
                }
            }
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_10 = 1; i_10 < 23; i_10 += 1) 
            {
                for (unsigned int i_11 = 3; i_11 < 23; i_11 += 1) 
                {
                    {
                        arr_36 [i_0] [i_9] [i_10] [22U] &= ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) min((min((var_9), (((/* implicit */long long int) arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_10 + 1] [i_11 + 1] [i_11])))), (((((/* implicit */long long int) ((/* implicit */int) var_2))) - (((((/* implicit */_Bool) var_8)) ? (-6781063421917166987LL) : (((/* implicit */long long int) var_5)))))))))));
                        arr_37 [i_10 + 1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) (_Bool)1))), ((+(((/* implicit */int) arr_15 [i_0 - 1] [i_10 + 1] [i_11 - 2] [i_0] [i_11 - 1]))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) var_0))));
            var_27 = ((/* implicit */_Bool) 585444891631190062ULL);
            arr_38 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))) - (((14036658695823288387ULL) - (((/* implicit */unsigned long long int) 4956965827299982923LL))))));
        }
    }
    for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
    {
        arr_43 [(signed char)8] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)0)) - (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)36734))))));
        var_28 = ((/* implicit */signed char) ((max((var_1), (((/* implicit */unsigned long long int) var_5)))) - (((unsigned long long int) 6221334100723689799ULL))));
    }
    var_29 = ((/* implicit */unsigned short) (~(min((2186336272U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)178)))))))));
    var_30 = ((/* implicit */unsigned char) min((max((((((/* implicit */int) var_4)) - (((/* implicit */int) var_3)))), (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_3))))))), ((~(1236745469)))));
    var_31 = var_8;
}
