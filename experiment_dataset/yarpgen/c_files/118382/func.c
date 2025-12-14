/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118382
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
    var_12 = ((/* implicit */unsigned long long int) ((long long int) var_0));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_13 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((3151807114523361161ULL) >> (((((((/* implicit */_Bool) (unsigned short)51905)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18166))) : (7507648159699801766LL))) - (18110LL)))))));
            arr_4 [i_0] = ((/* implicit */unsigned char) ((arr_2 [i_0]) > (arr_2 [i_0])));
            var_15 *= ((/* implicit */_Bool) ((unsigned char) 6672828654910981349LL));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [(unsigned short)6] = arr_1 [i_0] [i_0];
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
                        {
                            var_16 = arr_8 [(unsigned char)8] [i_1] [i_1] [i_1] [i_1] [i_1];
                            var_17 = ((/* implicit */unsigned short) ((short) arr_2 [i_0]));
                        }
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_15 [i_5])) : (arr_5 [2LL] [i_1] [i_0]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0])))));
                            var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) -634656755)) && ((_Bool)0)));
                            var_20 = ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_1]))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_6 = 3; i_6 < 14; i_6 += 2) 
            {
                for (long long int i_7 = 1; i_7 < 14; i_7 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_7 + 1] [i_6] [i_6 - 2] [i_6 - 2])) || (((/* implicit */_Bool) arr_16 [i_6] [i_6 - 2] [i_6 - 1]))));
                        arr_23 [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [14U] [i_1] [i_1] [i_1]))) < (-7323965224063868442LL))))));
                        arr_24 [i_6] [i_6 - 1] [(unsigned char)4] = ((/* implicit */int) 451674226U);
                        arr_25 [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_17 [i_0] [i_0] [i_6] [i_7 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1861637424U)) || (((/* implicit */_Bool) 3843293077U))))))));
                    }
                } 
            } 
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) arr_2 [i_0]);
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_33 [i_0] [i_8] [i_9] [i_10]))) ? (((((/* implicit */_Bool) arr_13 [i_9] [i_10])) ? (((-886400508) % (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((1290740447U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3843293089U)) ? (((/* implicit */int) arr_1 [i_0] [i_8])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)32133)) : (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_8] [i_8] [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4033))) >= (1290740447U)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_8] [i_8] [4U] [i_0])) || (((/* implicit */_Bool) arr_3 [13U])))))))))))));
        }
    }
}
