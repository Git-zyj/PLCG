/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183051
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_18 |= ((/* implicit */unsigned long long int) min((-436289730), (((/* implicit */int) (_Bool)0))));
            var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(min((arr_4 [(unsigned short)12] [i_0]), (arr_4 [i_1] [i_0])))))) ? (min((arr_0 [i_1]), (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 21; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        {
                            var_20 += ((/* implicit */unsigned long long int) (_Bool)1);
                            var_21 *= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (unsigned char)255))));
                            var_22 ^= ((/* implicit */short) var_11);
                            var_23 = ((/* implicit */unsigned int) ((4681106919888847125LL) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_4] [i_3])) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) (unsigned char)255)))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_2])) >= (((/* implicit */int) var_14)))))) > ((~(var_6)))));
            var_25 = ((/* implicit */long long int) ((short) arr_7 [i_0] [i_2]));
        }
        for (int i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) var_17))));
            var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_6]))) && ((!(((/* implicit */_Bool) 1396158124))))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 2; i_7 < 20; i_7 += 2) 
            {
                for (long long int i_8 = 4; i_8 < 21; i_8 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((unsigned char) 5171785638559127447LL))), (arr_21 [i_8] [i_7] [i_6] [i_0] [i_0]))) < (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */long long int) (unsigned char)110)), (arr_20 [13LL] [i_8 - 3] [5]))) == (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
                        arr_23 [i_0] [i_6] [i_7] [i_7] = ((/* implicit */short) (-(min((((/* implicit */long long int) 167025574U)), (5171785638559127447LL)))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            for (short i_10 = 1; i_10 < 21; i_10 += 3) 
            {
                {
                    arr_28 [i_10 - 1] = (-(max((max((((/* implicit */int) var_14)), (arr_26 [i_0]))), (((/* implicit */int) (_Bool)0)))));
                    var_29 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((arr_25 [i_9] [1LL]), (((/* implicit */unsigned short) arr_13 [(unsigned short)17] [i_9] [i_9] [(unsigned short)19] [i_9]))))), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (1301842605868798755LL)))))) >= (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-24929))))), ((((_Bool)1) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_9] [i_0])))))))));
                    arr_29 [(_Bool)1] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)255))))));
                    var_30 += ((/* implicit */unsigned char) -4681106919888847126LL);
                    arr_30 [i_0] [6U] [4U] &= ((/* implicit */short) ((((/* implicit */_Bool) 6340009781408809335LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-5171785638559127447LL)));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) (short)24928)), ((~(((unsigned int) var_11)))))))));
    }
    var_32 = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) max((((/* implicit */short) var_5)), (var_1)))))));
}
