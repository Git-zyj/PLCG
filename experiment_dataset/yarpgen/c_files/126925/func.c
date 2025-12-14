/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126925
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
    var_16 = ((/* implicit */int) max(((short)-10606), (((/* implicit */short) var_2))));
    var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)10602))) <= (var_4)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [17ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30452)) ? (((/* implicit */int) (short)30448)) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_12 [(signed char)12] [11] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1585142133)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-89))) : (-6814990552999886465LL)));
                    arr_13 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) 0U)), (-6814990552999886477LL))) - (((((/* implicit */_Bool) (short)12379)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6814990552999886465LL)))));
                    arr_14 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */int) arr_2 [i_2]);
                    arr_15 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 16347832451463183912ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5))))))), ((-(4449736037515855156ULL)))));
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */int) ((15928372209428057202ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5)))));
    }
    for (long long int i_3 = 1; i_3 < 10; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                {
                    arr_26 [i_3] = ((/* implicit */signed char) min((2098911622246367712ULL), (((/* implicit */unsigned long long int) 7540947387498101718LL))));
                    arr_27 [i_3] [i_3] = ((/* implicit */unsigned int) min(((-(2098911622246367712ULL))), (((/* implicit */unsigned long long int) (+(21U))))));
                    arr_28 [i_3] [i_4] [i_3] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) 5334717805344723630LL)) & (((((/* implicit */_Bool) 1481737232U)) ? (13997008036193696470ULL) : (((/* implicit */unsigned long long int) 516511429))))))));
                }
            } 
        } 
        arr_29 [i_3] = ((/* implicit */short) (~((-(((/* implicit */int) max((var_1), (((/* implicit */unsigned char) arr_19 [i_3] [i_3])))))))));
        arr_30 [i_3 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (max((-1584534124), (((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) (short)-30452)) : (((/* implicit */int) (_Bool)0))))))));
    }
}
