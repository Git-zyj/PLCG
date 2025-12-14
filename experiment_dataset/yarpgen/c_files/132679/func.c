/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132679
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
    var_17 = ((/* implicit */unsigned long long int) ((signed char) var_2));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) min((769534143840068674LL), (769534143840068686LL)))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -207915605699255230LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46838))) : (1480689262U)))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 23; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        {
                            arr_14 [i_1] [(signed char)15] [(unsigned char)4] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8658))) < (var_0))))));
                            arr_15 [i_0] [i_1] [i_2] [i_3 + 1] [i_0] [i_2] = ((/* implicit */short) (+(2905058117U)));
                        }
                    } 
                } 
            } 
            arr_16 [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)16))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) ((short) 2147483643));
            arr_23 [i_6] = ((/* implicit */short) (~((-(((/* implicit */int) (unsigned short)14120))))));
            var_20 |= ((/* implicit */_Bool) (~(1964849641)));
        }
        var_21 = ((/* implicit */long long int) ((arr_7 [i_5] [i_5]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)116)))))));
    }
}
