/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165234
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            var_12 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), (var_4)))) > (max((var_10), (((/* implicit */unsigned long long int) var_5)))))))) != ((-(var_4)))));
            arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))) - (((unsigned long long int) var_11))))) ? (((((/* implicit */_Bool) -3521429865391191602LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26950))) : (-3521429865391191602LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1405266143)) ? (((/* implicit */int) (short)-26957)) : (((/* implicit */int) (unsigned char)19))))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        }
        for (short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_13 *= ((/* implicit */short) min(((~(((/* implicit */int) ((unsigned char) var_9))))), (((((/* implicit */_Bool) ((int) var_11))) ? (var_3) : (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */int) var_5))))))));
            arr_9 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)3957)), (2229342482403557235ULL)))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_0)))));
            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) (((~(var_4))) ^ ((~((~(var_9)))))));
            arr_11 [(_Bool)1] [i_2] = ((/* implicit */short) ((unsigned short) max((((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-3971))))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        {
                            arr_21 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 11742912040026449865ULL)) ? (((/* implicit */unsigned long long int) 3521429865391191601LL)) : (6506288548858494378ULL)));
                            arr_22 [i_0] [8U] &= ((/* implicit */unsigned long long int) var_6);
                            var_14 = ((/* implicit */short) var_2);
                            arr_23 [i_3] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(var_8)))) ? (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))))) * (((/* implicit */unsigned long long int) (+((+(var_9))))))));
                        }
                    } 
                } 
            } 
            arr_24 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8)))))) ? ((-(((var_7) + (((/* implicit */long long int) var_4)))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (~(var_10))))))));
            var_15 += ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) (-(((/* implicit */int) (signed char)19))))));
            var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))))) ? ((-(min((var_8), (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) (-(3521429865391191601LL))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
        {
            arr_27 [i_0] = ((/* implicit */_Bool) (-(((unsigned long long int) max((var_4), (((/* implicit */unsigned int) var_11)))))));
            /* LoopSeq 2 */
            for (short i_8 = 3; i_8 < 20; i_8 += 3) /* same iter space */
            {
                arr_32 [i_8] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1856727430497024066ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-15135))) : (((unsigned int) (unsigned short)17391))));
                var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
            }
            for (short i_9 = 3; i_9 < 20; i_9 += 3) /* same iter space */
            {
                arr_35 [i_9] [i_7] [i_9] = ((/* implicit */short) (-(min((804333465U), (((/* implicit */unsigned int) (unsigned char)41))))));
                arr_36 [i_9] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_4))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (var_3)))) ? ((~(var_7))) : ((-(var_7)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    arr_40 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))))) : (max(((~(3828019217U))), (((unsigned int) var_5))))));
                    arr_41 [i_9] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (-(var_3))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_0)), (var_3)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_4)))));
                }
                var_18 = ((/* implicit */unsigned long long int) ((3521429865391191601LL) + (((/* implicit */long long int) 1251613444))));
            }
        }
        arr_42 [(short)12] [i_0] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) ((unsigned short) var_0)))))));
        var_19 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? ((-(var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 18250201424466489328ULL))))))));
    }
    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min((((max((var_4), (((/* implicit */unsigned int) var_2)))) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_6)))))), (((/* implicit */unsigned int) ((short) ((unsigned int) var_8)))))))));
        arr_47 [i_11] = ((short) ((((/* implicit */_Bool) max((((/* implicit */short) var_5)), (var_0)))) ? ((-(var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) var_5)))))));
    }
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
    {
        arr_50 [i_12] [i_12 - 1] = (~((+(var_10))));
        arr_51 [i_12] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
        var_21 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_7))));
    }
    var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_6))) && (((/* implicit */_Bool) ((unsigned char) var_8)))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_0)))))))));
}
