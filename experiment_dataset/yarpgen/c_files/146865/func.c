/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146865
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */short) ((((int) (-(((/* implicit */int) (short)(-32767 - 1)))))) << ((((+(((/* implicit */int) arr_0 [i_0])))) - (33787)))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) arr_7 [i_1] [i_2]))));
            arr_9 [i_1] = ((/* implicit */unsigned long long int) var_6);
            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4811)) <= (((/* implicit */int) var_4)))))));
        }
        for (int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
            {
                var_15 |= ((/* implicit */int) var_10);
                var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-65))));
                var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))) % (var_7)))) ? (-1522217555) : (1522217554)))))));
                var_18 = ((/* implicit */_Bool) arr_6 [i_3]);
            }
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
            {
                arr_18 [(_Bool)1] [(_Bool)1] [i_5] = ((/* implicit */long long int) ((arr_15 [12] [12] [i_5] [12]) >= (min((arr_15 [i_5] [i_5] [i_3] [i_1]), (((((/* implicit */_Bool) 551960039)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_16 [i_1] [i_3] [i_5]))))))));
                var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned char)10])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4811))) : (arr_11 [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) ((signed char) arr_0 [i_3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3])))))) : (arr_14 [i_1] [i_1] [i_5]))) : (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */short) arr_7 [i_3] [i_3])), ((short)4810)))) & (((int) arr_0 [i_1])))))));
                var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_1] [i_3] [i_5])) || (((/* implicit */_Bool) arr_6 [i_3]))));
            }
            var_21 = ((((/* implicit */_Bool) arr_8 [i_3] [i_1])) ? (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)28453)) == (((/* implicit */int) var_5)))))))) : ((~((+(1522217555))))));
            var_22 = ((((/* implicit */_Bool) (+(-1522217556)))) ? (min((arr_8 [i_1] [i_3]), (arr_8 [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_6 [14]), (arr_6 [i_1]))))));
        }
        arr_19 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1])) ? (max((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_16 [(unsigned short)7] [(unsigned short)7] [i_1])))), (((((/* implicit */_Bool) 11618029770846892803ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_1])))))) : (((/* implicit */int) ((arr_14 [i_1] [i_1] [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (-1835675691))))))))));
        var_23 = ((/* implicit */signed char) -760005901);
    }
    var_24 = ((/* implicit */long long int) ((var_2) ? (((var_11) * (((/* implicit */int) var_10)))) : (max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_10))))));
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            {
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)56676))) ? (((int) ((((/* implicit */int) (short)27885)) << (((1522217565) - (1522217559)))))) : ((-(((((/* implicit */int) arr_5 [(unsigned short)7] [i_7])) | (arr_10 [i_6] [i_7] [i_6])))))));
                arr_25 [i_7] [i_7] = ((/* implicit */short) ((((unsigned int) arr_1 [i_6] [i_7])) << ((((+(((/* implicit */int) arr_1 [(signed char)5] [(signed char)5])))) + (38)))));
                arr_26 [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) 4285004747U);
                arr_27 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_6] [i_6])) : (-185945158)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) == (var_3))))) : (((((/* implicit */_Bool) arr_16 [i_6] [i_7] [i_7])) ? (((/* implicit */unsigned int) -551960040)) : (arr_14 [(unsigned short)0] [i_6] [i_6])))))) ? (((/* implicit */int) (_Bool)0)) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) 1522217555)))))))));
                arr_28 [i_6] [i_7] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((short) var_4))), (min((min((arr_23 [i_7] [i_7]), (((/* implicit */unsigned int) 1855562321)))), (((/* implicit */unsigned int) ((17451402122681420937ULL) > (((/* implicit */unsigned long long int) var_9)))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) var_1);
}
