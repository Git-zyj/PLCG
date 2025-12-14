/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163158
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
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) -1287046367))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : ((-(arr_2 [i_0])))))) ? (((((/* implicit */int) arr_1 [i_0 - 4])) + (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (unsigned short)40121)));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_6 [(signed char)4] = ((((/* implicit */_Bool) 1729382256910270464LL)) ? (-462023716) : (462023716));
            var_19 = ((/* implicit */short) ((((/* implicit */long long int) -1287046376)) + (max((((((/* implicit */_Bool) arr_5 [15])) ? (var_11) : (((/* implicit */long long int) 1780568924)))), (((/* implicit */long long int) var_6))))));
            var_20 = ((/* implicit */_Bool) (signed char)-91);
            var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40126)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1729382256910270464LL)) ? (-1596912746) : (((/* implicit */int) (unsigned char)173))))) : (((((/* implicit */long long int) 773812903)) + (-2243800873537492564LL)))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)43))) == (2984143808402623231ULL)))) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)22518)))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (arr_2 [i_0 - 2])))));
            arr_7 [i_0] = ((/* implicit */unsigned long long int) -1729382256910270464LL);
        }
    }
    for (unsigned short i_2 = 4; i_2 < 22; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((((-2147483647 - 1)) % (589851629))))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_2])) ? (11085850949783559053ULL) : (((/* implicit */unsigned long long int) 463672484)))), (((/* implicit */unsigned long long int) arr_4 [(signed char)7] [i_2 - 4]))))) ? ((~(((/* implicit */int) arr_10 [i_2])))) : ((-((~(var_13)))))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (short)3862)) ? (3894829611U) : (((/* implicit */unsigned int) 97772512)))))));
        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(3065527193U))))));
    }
    var_25 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_2)) ? ((-(-771761322))) : ((+(1395999273)))))));
    var_26 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))))), (var_8)));
    var_27 -= ((((var_13) + (2147483647))) >> (((var_10) - (3088787979064953264ULL))));
}
