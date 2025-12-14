/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135324
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
    var_12 = ((/* implicit */unsigned long long int) (+(var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_6 [i_0] [i_2] = ((/* implicit */unsigned int) min((arr_5 [i_2]), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65522)) : (((/* implicit */int) (_Bool)1)))))));
                    var_13 += ((/* implicit */short) arr_2 [i_0] [i_0]);
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */signed char) (((((-(((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) (_Bool)0)))) % (((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [i_1] [i_0]), (((/* implicit */long long int) arr_8 [i_3] [i_1]))))) && (((/* implicit */_Bool) arr_4 [i_0] [i_3] [i_3 + 1])))))));
                    var_14 = ((/* implicit */unsigned char) 16021766120415854764ULL);
                }
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 2424977953293696852ULL)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_0 [i_1])), (var_6)))) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [22ULL]))))) : (((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_1]), (((/* implicit */long long int) ((((/* implicit */int) (signed char)39)) << (((arr_1 [i_0]) - (3598245722U)))))))))));
                var_16 = ((/* implicit */unsigned int) (-(min(((((_Bool)1) ? (16021766120415854744ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))))), (((((/* implicit */_Bool) (signed char)107)) ? (16021766120415854755ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (+(min((var_11), (((/* implicit */unsigned int) ((14758239122097667365ULL) != (14758239122097667365ULL))))))));
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_18 = ((/* implicit */int) ((unsigned long long int) arr_10 [i_4]));
        var_19 = ((/* implicit */short) ((unsigned long long int) ((arr_5 [i_4]) - (arr_5 [i_4]))));
    }
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22821))) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_1 [i_5])) : (3688504951611884251ULL)))));
            arr_19 [i_5] = ((/* implicit */unsigned long long int) max((((long long int) arr_2 [i_5] [i_6])), (((/* implicit */long long int) arr_7 [i_5]))));
            arr_20 [i_5] [i_5] [i_5] = ((/* implicit */int) 14758239122097667397ULL);
            arr_21 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_5] [i_6])) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) var_11)) : (min((((/* implicit */long long int) ((_Bool) var_7))), (min((((/* implicit */long long int) arr_11 [i_5] [i_5])), (-5908958375320267746LL)))))));
            arr_22 [i_5] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5])) ? (arr_15 [i_5]) : (arr_15 [i_5]))));
        }
        arr_23 [i_5] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((arr_1 [i_5]) - (3598245708U)))))) ? (min((15054395792772660488ULL), (((/* implicit */unsigned long long int) (unsigned char)198)))) : (min((16021766120415854753ULL), (((/* implicit */unsigned long long int) arr_4 [i_5] [i_5] [i_5])))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [2LL] [2LL] [i_5])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5] [(unsigned char)16] [(unsigned char)16]))))) <= (max((((/* implicit */long long int) (_Bool)0)), (0LL))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
        {
            var_22 = (i_5 % 2 == 0) ? (((/* implicit */unsigned int) ((((-5271886610378604125LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) >> (((((/* implicit */int) arr_16 [i_5])) - (200)))))) : (((/* implicit */unsigned int) ((((-5271886610378604125LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) >> (((((((/* implicit */int) arr_16 [i_5])) - (200))) + (165))))));
            var_23 |= ((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)1)))) >> ((((+(arr_26 [i_5] [i_7] [(unsigned char)6]))) - (2663742197590476672ULL)))));
        }
        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
        {
            arr_29 [i_8] [i_5] [i_5] = ((/* implicit */unsigned int) ((_Bool) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_5] [i_8])) : (((/* implicit */int) var_4))))));
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_9))));
        }
    }
}
