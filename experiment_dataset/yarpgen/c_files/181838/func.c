/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181838
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
    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) ((unsigned char) var_2)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_11 = (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                                arr_13 [i_2] [i_2] [i_1] [i_3 - 1] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) var_4);
                                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min((max((min((var_6), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) var_0)))))));
                                var_13 -= ((/* implicit */_Bool) max((arr_12 [i_0] [i_0 + 1]), (((unsigned int) ((arr_6 [11U] [i_1] [i_1] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)21459)))))));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */short) var_3)), ((short)20633)))), (max((var_4), (arr_3 [i_1] [i_1])))))) / (max((((/* implicit */unsigned long long int) var_7)), (var_9)))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) var_8);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 2; i_7 < 17; i_7 += 4) 
            {
                {
                    arr_24 [i_5 - 1] [(short)5] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) arr_22 [i_6] [i_6] [i_6] [i_6 - 1])) : (((/* implicit */int) (short)20632))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */int) (short)20635))))) && (((/* implicit */_Bool) (+(var_6))))))) : ((-(((((/* implicit */_Bool) arr_20 [(_Bool)1] [9LL] [i_7] [i_7])) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) var_3))))))));
                    arr_25 [i_7] = ((/* implicit */short) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 2; i_8 < 15; i_8 += 4) 
                    {
                        arr_28 [i_5] [i_5] [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) 7740056347027396108ULL);
                        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_8] [i_8] [i_7] [i_8 + 1] [i_7])) | (((((/* implicit */int) var_1)) & (((/* implicit */int) var_1)))))))));
                        var_17 = ((/* implicit */int) var_1);
                    }
                    var_18 = ((/* implicit */unsigned short) ((int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) var_7))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6 - 1] [i_7 - 2]))) : (var_9))))));
                    var_19 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) var_5)))), ((+(((/* implicit */int) (unsigned char)162))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)32742))));
    }
    for (short i_9 = 0; i_9 < 13; i_9 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((unsigned char) arr_12 [i_9] [i_9]))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-20647))))) : (((var_9) % (var_9)))))));
            arr_33 [5LL] [i_10] [i_9] = ((/* implicit */unsigned int) ((unsigned char) var_5));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            arr_37 [11ULL] [i_11] = ((/* implicit */unsigned long long int) ((var_1) ? (((max((((/* implicit */unsigned int) (short)32767)), (4191347965U))) / (max((978866740U), (((/* implicit */unsigned int) (unsigned short)32659)))))) : (max((4191347965U), (((/* implicit */unsigned int) (unsigned short)59943))))));
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-(((((/* implicit */int) var_5)) + (((/* implicit */int) arr_36 [i_11] [i_9])))))))));
            var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((int) var_4)) > (((/* implicit */int) arr_21 [i_11] [(unsigned char)16] [(unsigned char)16])))))));
        }
        /* vectorizable */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) var_4)))));
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_25 += ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
                            var_26 = ((/* implicit */int) ((unsigned short) arr_45 [i_15] [i_15 - 1] [i_15] [i_14] [i_15]));
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_14 - 1] [i_14 - 1] [i_14 - 1])))))));
                            var_28 &= ((/* implicit */unsigned long long int) var_6);
                        }
                    } 
                } 
            } 
            var_29 = arr_2 [i_12] [i_9];
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 1; i_16 < 10; i_16 += 1) 
            {
                for (unsigned short i_17 = 2; i_17 < 11; i_17 += 4) 
                {
                    {
                        arr_54 [i_9] [(_Bool)1] [i_16] [i_17] [i_17] = ((/* implicit */unsigned char) ((unsigned int) var_9));
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_7)) % (arr_31 [i_9] [(_Bool)1] [i_16 + 3]))))));
                    }
                } 
            } 
        }
        var_31 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)20635)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)191))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5593)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191))) : (978866740U)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [4ULL] [i_9] [i_9] [i_9]))) : (var_4))) : ((~(var_4)))))));
        var_32 = ((/* implicit */long long int) arr_43 [i_9]);
    }
}
