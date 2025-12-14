/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101664
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(-9168496275548229776LL))))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41101)))))) : (((((/* implicit */_Bool) var_1)) ? (9168496275548229776LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
            var_13 = (!(var_7));
            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((9168496275548229803LL) - (9168496275548229779LL)))))) ? (((int) 9168496275548229787LL)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))))))));
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -9168496275548229761LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -9168496275548229777LL)) ? (var_6) : (-9168496275548229804LL))))));
        }
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                var_15 = ((/* implicit */long long int) (-(var_4)));
                arr_10 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 9168496275548229761LL)) ? (var_4) : (((/* implicit */unsigned long long int) -732689417))))));
            }
            arr_11 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))));
        }
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
        {
            var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) || ((!(((/* implicit */_Bool) (unsigned short)11))))));
            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(-9168496275548229763LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65515)))))) : ((-(-8085034174215461110LL)))));
        }
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-9168496275548229804LL)))) ? ((-(((/* implicit */int) var_0)))) : ((~(((/* implicit */int) (unsigned short)65515))))));
            var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)116)) >> (((((/* implicit */int) var_3)) + (18048)))))) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) ((unsigned char) 9168496275548229761LL)))));
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    {
                        arr_31 [i_9] [i_9] [i_6] [i_8] [i_6] [i_8] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) var_2)), (var_4))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)142)), ((unsigned short)12))))));
                        var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned char)174)), (max((max((-9168496275548229761LL), (-862300051380859288LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 9168496275548229769LL)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_5)))))))));
                        arr_32 [i_6] = ((/* implicit */int) ((var_8) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)136))))) ? (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) -1645083632)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) && (((/* implicit */_Bool) var_10)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65524)))))))))));
                    }
                } 
            } 
            var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)195), (var_5)))))))) ? (max((max((var_4), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((-565349573) | (((/* implicit */int) (unsigned char)140))))))) : ((~(var_4)))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_8) ? (((((/* implicit */_Bool) -9168496275548229776LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-24413)) : (((/* implicit */int) var_7)))))))));
            arr_36 [i_6] = (+(((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (-1645083612)))) ? (((/* implicit */int) (short)-24413)) : (((/* implicit */int) var_7)))));
            var_23 ^= ((/* implicit */_Bool) (~(max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)159)))))))));
            var_24 &= ((/* implicit */short) (+(var_6)));
        }
        var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_1)))))))));
    }
    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (+(max((((((/* implicit */int) (unsigned char)1)) ^ (((/* implicit */int) var_5)))), (((565349572) << (((((/* implicit */int) var_2)) - (43))))))))))));
    var_27 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned char)243))))));
    var_28 = ((/* implicit */long long int) var_5);
}
