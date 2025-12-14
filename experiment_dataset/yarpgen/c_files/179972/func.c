/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179972
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_12 += ((/* implicit */unsigned char) ((unsigned int) min((arr_4 [i_0 + 1] [i_3]), (var_2))));
                            arr_10 [i_0 - 1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) min((((arr_7 [i_0 + 1] [i_0 + 1] [i_2 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))))), (((/* implicit */unsigned long long int) ((int) (signed char)34)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 22; i_4 += 3) 
                {
                    for (int i_5 = 2; i_5 < 20; i_5 += 3) 
                    {
                        {
                            arr_18 [i_0 - 1] [i_1] [i_4 - 1] [(_Bool)1] = ((/* implicit */short) ((int) ((((/* implicit */int) max(((unsigned char)106), ((unsigned char)110)))) >> (((((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_1] [i_1] [i_5 + 2] [i_5])) + (9786))))));
                            var_13 = ((/* implicit */signed char) ((short) (~(((/* implicit */int) max((arr_9 [i_0] [i_0 + 1] [i_4] [i_0 + 1] [i_1] [i_0]), (var_2)))))));
                            arr_19 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */unsigned long long int) max((max(((unsigned char)154), (var_6))), (min((var_11), ((unsigned char)109)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (((-(min((2147483622), (((/* implicit */int) (unsigned char)128)))))) / ((+(((/* implicit */int) ((unsigned char) var_7)))))));
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        for (unsigned int i_7 = 4; i_7 < 22; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                {
                    arr_30 [i_6] [i_7 - 2] [i_8] = ((/* implicit */short) ((_Bool) (short)7936));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        for (short i_10 = 3; i_10 < 23; i_10 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_24 [i_7 + 2] [i_10 - 2]), (((/* implicit */int) var_3)))))));
                                arr_36 [11ULL] [i_7] [i_7] [i_9] [i_10] [i_10 - 2] [i_8] = ((/* implicit */int) ((min((((/* implicit */unsigned int) (unsigned char)141)), (var_9))) >= (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */short) (unsigned char)125))))))));
                                arr_37 [i_8] [(short)2] [10] [10] [10] [i_10] = ((/* implicit */short) ((((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)63)) * (((/* implicit */int) (unsigned char)157)))))));
                                var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), ((short)8616)))), (((577186562U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)111))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_11 = 0; i_11 < 15; i_11 += 1) 
    {
        for (unsigned char i_12 = 2; i_12 < 11; i_12 += 3) 
        {
            for (short i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 2) 
                        {
                            {
                                arr_51 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) (short)8192)) : (((/* implicit */int) (unsigned char)84))))), (max((24ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)228)) && (((/* implicit */_Bool) (signed char)126)))))))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned char)137), (((/* implicit */unsigned char) var_3))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)214))))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_11] [i_12] [i_14] [i_14] [i_15] [i_12]))) - (arr_49 [i_15] [i_11] [i_13] [i_11] [i_11]))), (((/* implicit */unsigned long long int) ((unsigned char) arr_46 [i_11] [i_12] [i_13] [i_14])))))));
                                arr_52 [i_11] [i_11] [i_11] [i_11] [(unsigned char)6] [i_11] [i_11] = ((/* implicit */short) min((((int) var_5)), (((/* implicit */int) min((var_11), ((unsigned char)85))))));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */_Bool) max((((((arr_28 [i_11]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_11] [i_11] [i_12] [i_13]))) : (arr_47 [(_Bool)1] [i_12] [i_12 + 4] [(unsigned char)0]))) >> (((min((var_9), (((/* implicit */unsigned int) arr_6 [(unsigned char)14] [i_12] [i_12])))) - (378624714U))))), (((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1))))));
                    var_19 = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_6)) - (((/* implicit */int) arr_11 [i_12 - 1] [i_12 + 3] [10U]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 1) 
    {
        for (unsigned int i_17 = 2; i_17 < 15; i_17 += 4) 
        {
            {
                var_20 *= ((/* implicit */_Bool) ((((((/* implicit */int) arr_16 [i_17 - 1] [i_17 - 2] [i_17 + 2] [i_17] [i_17])) ^ (((/* implicit */int) arr_16 [i_17 - 2] [i_17 - 1] [i_17 + 2] [i_17 + 2] [i_17])))) << (((max((arr_57 [i_16] [i_16] [i_16]), (((/* implicit */unsigned int) (unsigned char)255)))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_16]))) / (var_5)))))));
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 17; i_19 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((int) ((((/* implicit */int) ((((/* implicit */int) (short)31743)) == (((/* implicit */int) var_1))))) >> (((((/* implicit */int) ((signed char) (unsigned char)92))) - (72))))));
                            arr_66 [i_18] [i_17] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((+(11851499740838107961ULL))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_20 = 3; i_20 < 15; i_20 += 4) 
                {
                    for (signed char i_21 = 2; i_21 < 16; i_21 += 1) 
                    {
                        {
                            arr_73 [i_16] [(unsigned char)10] [(unsigned char)16] [i_17] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (unsigned char)118))) % (max((((((((/* implicit */int) arr_16 [i_16] [i_17] [i_20] [i_20] [i_20])) + (2147483647))) >> (((((/* implicit */int) arr_31 [i_16] [i_21] [i_17] [i_21])) - (31175))))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_7))))))));
                            arr_74 [i_16] [i_20] [i_20] [i_20] [i_20] [i_21] = ((/* implicit */short) max(((-(((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483646)) == (6595244332871443648ULL)))))), (((/* implicit */int) ((((((/* implicit */_Bool) 8926545127915589806ULL)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
