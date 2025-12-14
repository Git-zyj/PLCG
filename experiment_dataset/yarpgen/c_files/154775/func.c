/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154775
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) (signed char)-29))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) var_11)) : (arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (11502525535933552396ULL))))), (((/* implicit */unsigned long long int) (_Bool)0))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)156);
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_16 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_2 [i_1])))) : (max((((/* implicit */int) max(((unsigned char)125), (((/* implicit */unsigned char) (_Bool)1))))), ((+((-2147483647 - 1))))))));
        var_17 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 6411254721907794423ULL)) ? (((/* implicit */long long int) arr_5 [10LL] [i_1])) : (-4922472665874914092LL))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_8 [i_2] [14LL] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)57))));
        var_18 = ((((/* implicit */_Bool) ((unsigned int) 585595644U))) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) (unsigned char)0)));
        arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_2] [i_2])) <= (((/* implicit */int) var_10))));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 2; i_3 < 19; i_3 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_3 - 1] [i_3]))));
            arr_12 [i_3] [i_3] = ((/* implicit */signed char) ((_Bool) (signed char)10));
            var_20 = ((/* implicit */unsigned long long int) arr_1 [i_3]);
        }
        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 2; i_6 < 17; i_6 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_6] [i_5])) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) arr_6 [i_2] [i_4]))))) : (7088647235338741824LL)));
                        arr_22 [i_2] [i_4] [(_Bool)1] [i_6] = ((unsigned char) (_Bool)1);
                        var_22 *= (_Bool)1;
                        arr_23 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned long long int) (unsigned char)95)));
                    }
                } 
            } 
            var_23 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)136)))) >> (((/* implicit */int) ((unsigned char) 6ULL)))));
        }
    }
    var_24 = ((/* implicit */signed char) var_3);
    var_25 = ((/* implicit */unsigned int) ((signed char) (unsigned char)249));
}
