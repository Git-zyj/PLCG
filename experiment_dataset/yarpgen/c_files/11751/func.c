/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11751
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            var_16 = ((3146318782U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)8792))));
            var_17 = ((/* implicit */unsigned short) (~(-1079422477289734667LL)));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */signed char) 13150344826284891714ULL);
                        arr_13 [i_3] [i_0 - 2] [i_0] [i_0] [i_1] = (i_0 % 2 == zero) ? (((((var_2) + (9223372036854775807LL))) >> (((arr_7 [i_0] [i_1 + 2] [i_2] [i_3]) - (11735774913198980705ULL))))) : (((((var_2) + (9223372036854775807LL))) >> (((((arr_7 [i_0] [i_1 + 2] [i_2] [i_3]) - (11735774913198980705ULL))) - (813651538727951209ULL)))));
                    }
                } 
            } 
        }
        var_19 = ((/* implicit */short) ((long long int) arr_3 [i_0 - 1] [i_0 - 1]));
    }
    for (short i_4 = 3; i_4 < 8; i_4 += 4) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */short) (+((~(min((-1639974153600112761LL), (((/* implicit */long long int) (short)-2204))))))));
        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) (unsigned char)77)), (-6491185247784777860LL))), (((/* implicit */long long int) (~(((/* implicit */int) (short)-29582)))))))) ? (min((((/* implicit */unsigned long long int) (short)29579)), (3846576519607421983ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) == (min((var_0), (((/* implicit */unsigned long long int) (short)-27389))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            arr_20 [i_4] = 18075067843857035558ULL;
            var_21 = ((/* implicit */unsigned short) ((unsigned char) -1079422477289734667LL));
        }
        for (unsigned long long int i_6 = 1; i_6 < 7; i_6 += 2) 
        {
            var_22 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (~(6491185247784777875LL)))) && (((/* implicit */_Bool) arr_9 [i_4] [i_6] [i_4] [i_6 + 1])))));
            arr_24 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_12 [i_4] [i_6] [i_6 + 2] [i_4 + 1] [i_6 - 1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)29582))) - (arr_22 [i_4 - 3] [i_6] [i_4])))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_6] [i_6 + 3] [i_4])) - (((/* implicit */int) var_4))))), (min((arr_9 [i_4 + 1] [i_4 + 2] [i_4] [i_6]), (((/* implicit */long long int) var_1)))))) : (((/* implicit */long long int) (((-(((/* implicit */int) var_4)))) - (((/* implicit */int) arr_19 [i_6] [i_6])))))));
        }
    }
    var_23 = ((/* implicit */long long int) min((var_23), (((max(((-(var_12))), (((/* implicit */long long int) var_4)))) + (((/* implicit */long long int) ((/* implicit */int) ((short) ((((var_3) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)30066)) - (30048))))))))))));
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((-5369159462351212410LL), (((/* implicit */long long int) (short)32760)))) ^ (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_15)), ((unsigned short)0)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32761))) > (var_2))))))) : (18446744073709551613ULL)));
}
