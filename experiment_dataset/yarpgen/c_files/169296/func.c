/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169296
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [16LL] [16LL] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)132))));
                var_11 = ((/* implicit */int) ((((((var_5) >> (((((/* implicit */int) (unsigned short)20827)) - (20821))))) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((unsigned long long int) 134217727U)) : (((/* implicit */unsigned long long int) arr_1 [3]))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_12 = ((short) 4160749564U);
                                var_13 = ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)7))));
                                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(2097151U))))));
                                var_16 = ((/* implicit */long long int) var_5);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_8 = 4; i_8 < 17; i_8 += 2) 
                {
                    var_17 = ((/* implicit */unsigned short) min(((((~(2097165U))) * (((((/* implicit */_Bool) 4292870147U)) ? (2097151U) : (4292870167U))))), ((+(15U)))));
                    /* LoopNest 2 */
                    for (short i_9 = 3; i_9 < 19; i_9 += 4) 
                    {
                        for (int i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            {
                                arr_33 [(unsigned short)4] [i_9] [(short)17] [(short)7] [(short)7] [i_9] [(short)7] = ((/* implicit */unsigned char) (unsigned short)65525);
                                var_18 &= ((/* implicit */unsigned int) var_0);
                                arr_34 [4] [i_9] [i_8] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((int) arr_3 [i_0] [i_1 - 1] [i_1 - 1]));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_11 = 3; i_11 < 13; i_11 += 4) 
    {
        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) var_0)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_11 + 1] [11U] [i_11]))) ^ (0LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4278190080U))))))));
        /* LoopNest 3 */
        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            for (long long int i_13 = 1; i_13 < 14; i_13 += 1) 
            {
                for (unsigned int i_14 = 1; i_14 < 13; i_14 += 4) 
                {
                    {
                        var_20 = arr_18 [i_14] [i_11] [i_11] [i_14];
                        arr_44 [i_11 - 2] [i_11] [(short)8] [i_11 - 2] = ((/* implicit */unsigned long long int) var_1);
                        var_21 = ((/* implicit */unsigned long long int) 3495352190U);
                        arr_45 [i_11 - 1] [i_11 + 2] [i_11] [i_11] [i_11] = ((/* implicit */short) ((((((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-6870)), (2097151U)))) > (min((((/* implicit */long long int) 1485246492)), (var_10))))) ? (((unsigned int) arr_39 [i_14 - 1])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((var_4) % (((/* implicit */unsigned long long int) var_10)))) >= (((/* implicit */unsigned long long int) arr_35 [i_11]))))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)20773)) << (((arr_0 [i_11] [i_11]) - (15461971257632889625ULL)))))))))) ^ (var_5)));
    }
    for (int i_15 = 0; i_15 < 17; i_15 += 4) 
    {
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (short)13681)) ? (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) 2097127U)), (-5901035962411337795LL))), (((/* implicit */long long int) -2147483624))))) : (max((3653957779197660101ULL), (((/* implicit */unsigned long long int) var_10))))));
        arr_50 [i_15] = ((/* implicit */long long int) 3707397176U);
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27887))) : (2097132U)));
    }
    var_25 |= ((/* implicit */int) var_7);
}
