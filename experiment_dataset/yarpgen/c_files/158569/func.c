/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158569
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) var_1)) >> (((1552063109U) - (1552063094U))))), (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_8)))))))) ? (((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0])))))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1])) > (((/* implicit */int) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))))))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-13))))) ? (((/* implicit */long long int) max((16776192), (((/* implicit */int) (unsigned short)25))))) : (((long long int) max((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])), (1748462690))))));
                var_15 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((long long int) 5ULL))), ((~(((((/* implicit */_Bool) (short)-1)) ? (8168082911837843336ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((10278661161871708280ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : ((~(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((unsigned short) ((4258755264187755914ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39615)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            {
                var_16 = ((/* implicit */_Bool) (((~((~(((/* implicit */int) var_10)))))) / (((/* implicit */int) min(((short)12), (((/* implicit */short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_12))))))))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
                            /* LoopSeq 3 */
                            for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 4) 
                            {
                                var_18 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_6 + 1] [i_4] [i_4])) ? (arr_17 [i_6] [i_6] [i_6 + 2] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7376099396522320735ULL)) && (((/* implicit */_Bool) 15041958326242698508ULL))))))));
                                var_19 ^= ((/* implicit */unsigned short) -1829182759);
                                var_20 = ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) (unsigned short)34141)));
                                var_21 -= ((/* implicit */signed char) ((((min((((/* implicit */int) arr_12 [i_3] [i_3])), (var_12))) > ((~(((/* implicit */int) arr_18 [i_5])))))) ? (((/* implicit */int) ((_Bool) arr_17 [i_3] [i_6 + 2] [i_3] [i_6 - 1] [i_6 + 1]))) : ((-(((/* implicit */int) var_8))))));
                            }
                            for (short i_7 = 0; i_7 < 20; i_7 += 1) 
                            {
                                var_22 *= ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */signed char) arr_14 [i_2] [i_2] [i_2])), (var_4))));
                                var_23 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_19 [i_2] [i_7])) / (min((1989620697), (((/* implicit */int) (unsigned short)23403))))))));
                            }
                            for (short i_8 = 2; i_8 < 19; i_8 += 3) 
                            {
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_9 [i_8 - 1])))), (((/* implicit */int) arr_9 [i_8 - 2])))))));
                                var_25 = ((/* implicit */unsigned short) min((min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) (unsigned short)56366)))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_11 [i_2] [i_2] [i_8 - 2])))))));
                            }
                            arr_25 [i_2] [i_2] = ((/* implicit */int) var_3);
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((var_1), (((/* implicit */short) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_2)))))))) : (((/* implicit */int) (_Bool)1))));
    var_27 ^= var_12;
}
