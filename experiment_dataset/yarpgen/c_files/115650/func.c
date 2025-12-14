/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115650
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 4039688309U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (min((((/* implicit */unsigned int) (signed char)9)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (255279007U))))))))));
    var_18 = ((/* implicit */signed char) ((unsigned char) var_3));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((255278986U) & (((/* implicit */unsigned int) -1))))) ? (((((/* implicit */int) var_10)) & (((/* implicit */int) var_14)))) : (((/* implicit */int) var_16))))) | (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) max((var_4), (((/* implicit */int) var_11))))) : (max((var_13), (((/* implicit */unsigned int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((4039688304U), (255279014U)))) ? (12362921205319413423ULL) : (max((((/* implicit */unsigned long long int) 4039688295U)), (9338972696235848963ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [(short)17]))) : (((255279003U) | (4039688310U)))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            arr_7 [i_0 + 2] = var_16;
            arr_8 [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) var_6);
        }
        for (signed char i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            arr_12 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_4)) | ((~(arr_11 [i_0 + 2])))));
            arr_13 [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) arr_0 [i_2] [(short)13]);
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_24 [i_0 - 1] [i_0] [i_0] [i_0 + 2] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_22 [i_0 + 2])) : (((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 2] [i_5]))))));
                            var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)65535)), (17062046962645906497ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0]))) : (min((255279007U), (((/* implicit */unsigned int) arr_22 [21U])))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_7 = 3; i_7 < 20; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        {
                            var_22 *= 4039688310U;
                            var_23 *= ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5)))) % (4039688288U));
                        }
                    } 
                } 
            } 
            var_24 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min(((short)3033), (((/* implicit */short) (unsigned char)250))))), (min((255278958U), (((/* implicit */unsigned int) var_9))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((unsigned int) var_6))))) : (4039688304U));
            arr_35 [i_0] [i_6] = ((/* implicit */unsigned long long int) ((unsigned char) max((((unsigned short) arr_28 [i_6] [i_6] [i_0 - 1])), (((/* implicit */unsigned short) ((255278983U) >= (255278986U)))))));
        }
        for (signed char i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) min((((((/* implicit */_Bool) ((signed char) 255278983U))) ? (((/* implicit */unsigned long long int) arr_34 [(unsigned char)14] [i_0 - 1] [(unsigned char)14] [i_10] [(short)14])) : (((unsigned long long int) var_7)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0] [10])) ? (255278983U) : (arr_25 [5])))) ? (max((arr_28 [i_10] [1ULL] [1ULL]), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((arr_2 [i_10] [i_0]) | (4039688295U)))))))))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 255278990U)) ? (4002259745U) : (255278983U))), (min((((/* implicit */unsigned int) var_16)), (255278963U)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_15 [(unsigned char)2] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0]))) >= (4039688346U)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16))))))))));
        }
    }
}
