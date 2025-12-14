/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157936
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(unsigned char)2] [(unsigned char)2] [(unsigned char)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 125829120)) && (((/* implicit */_Bool) 18446744073709551598ULL)))))) : (((unsigned long long int) arr_3 [i_0]))));
                arr_4 [i_0] [12ULL] [(signed char)12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (signed char)104))) ? (872799885U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))) < (542472579045032013ULL)))))));
                var_11 -= (~(4103840275U));
                arr_5 [i_0] = ((/* implicit */short) ((int) ((short) -2147483629)));
            }
        } 
    } 
    var_12 = (((!(((/* implicit */_Bool) ((long long int) var_6))))) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                {
                    for (unsigned char i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        {
                            arr_17 [i_2] [(signed char)0] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) arr_13 [(signed char)0] [i_4] [i_4] [i_4] [i_3] [i_2])))) ? ((((!(((/* implicit */_Bool) arr_11 [i_4] [i_4 - 1] [i_2] [i_4])))) ? (((unsigned int) 2064384U)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [0LL])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)48))))))));
                            arr_18 [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_12 [(unsigned char)2] [i_4] [(unsigned char)9] [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(signed char)2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3]))))))) * (((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4]))) / (arr_13 [i_2] [(unsigned char)6] [(unsigned char)6] [i_4] [i_4] [i_5 - 1])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [7ULL] [i_6])) ? (((/* implicit */unsigned long long int) (+(4091286267U)))) : (arr_15 [i_3] [i_7]))))));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_3] [i_3] [i_8])) != (((/* implicit */int) arr_19 [i_3] [(unsigned char)4]))));
                                var_15 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4292902889U))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 191127004U))) ? (arr_0 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((10179259383370863580ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4103840275U))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
