/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115274
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
        var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-39))) == (-8879644630685078814LL)));
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-39)) && (((/* implicit */_Bool) -4462165131986536988LL))))) : (((/* implicit */int) var_4)))))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            var_22 = ((/* implicit */signed char) ((((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_12)))) ^ (((/* implicit */int) var_12))));
                            var_23 += ((/* implicit */long long int) (~((-(((/* implicit */int) var_17))))));
                        }
                    }
                } 
            } 
            var_24 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-26866))) > (-4462165131986536988LL)))) + (((/* implicit */int) var_12))));
            var_25 = ((/* implicit */short) (unsigned short)37835);
            var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 12273038941272823225ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_8))))) : ((~(((/* implicit */int) var_4))))));
        }
        for (signed char i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) min((var_2), (var_15))))));
            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (unsigned short)37835))));
            var_29 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-4462165131986536988LL)))));
        }
        for (long long int i_6 = 1; i_6 < 18; i_6 += 3) 
        {
            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)64)) ? (-1675068182077387811LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-37))))), (((/* implicit */long long int) (signed char)-45))))), (((unsigned long long int) (signed char)22)))))));
            var_31 = min((max(((+(11669208649489696509ULL))), (((/* implicit */unsigned long long int) ((signed char) arr_2 [i_6] [i_6] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_15))))) || (((/* implicit */_Bool) var_6))))));
        }
        for (unsigned short i_7 = 1; i_7 < 17; i_7 += 2) 
        {
            arr_20 [(signed char)18] [(short)12] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-95))));
            /* LoopSeq 2 */
            for (unsigned short i_8 = 1; i_8 < 18; i_8 += 1) 
            {
                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) 4462165131986536964LL))));
                var_33 += ((/* implicit */unsigned char) 7437726044254349059ULL);
                var_34 = ((/* implicit */signed char) ((9053015913585453843ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-102)))));
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    var_35 = ((/* implicit */_Bool) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) min((arr_7 [i_0]), (((/* implicit */unsigned char) (signed char)36)))))));
                    arr_26 [6ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (!(var_7)))) : (((/* implicit */int) max((var_14), (var_14))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)55910))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (var_13))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))) ^ (15419135356839655907ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_1)))))))))));
                }
                var_36 = ((/* implicit */long long int) min((var_36), (((((/* implicit */_Bool) max((arr_21 [(signed char)14] [(signed char)14] [i_8] [i_8 - 1]), (arr_21 [0LL] [0LL] [i_8] [i_8])))) ? (max((((/* implicit */long long int) var_3)), (arr_21 [(signed char)8] [i_8 + 1] [(_Bool)1] [(unsigned short)14]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_11))))))))));
            }
            for (unsigned short i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                var_37 = ((/* implicit */short) (unsigned char)141);
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    for (signed char i_12 = 1; i_12 < 17; i_12 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned char) (signed char)28))))) && (((/* implicit */_Bool) (+(arr_21 [i_0] [i_0] [i_0] [i_0])))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)13631)))))));
                            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) var_15)), (arr_5 [i_7] [i_0] [i_7]))), (((/* implicit */long long int) var_1))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)7647)), (min((576390383559245824ULL), (((/* implicit */unsigned long long int) (signed char)-73)))))) : (((/* implicit */unsigned long long int) max((arr_24 [i_0] [i_0] [i_10] [i_0]), (((/* implicit */long long int) var_17)))))));
                            arr_36 [i_12] [i_0] [i_11] [10LL] [i_0] [i_0] [i_0] = ((/* implicit */short) ((max((2098363492806187886LL), (((/* implicit */long long int) var_8)))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                            var_40 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1735343488074688208LL)) && (((/* implicit */_Bool) -8595113585343731569LL))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                arr_39 [i_0] [i_0] [i_0] = ((((((/* implicit */int) min(((signed char)-60), (arr_32 [(short)19])))) > (((/* implicit */int) var_13)))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))) + (max((((/* implicit */long long int) var_1)), (arr_8 [i_13 + 1] [i_7] [i_13] [i_13])))))));
                var_41 -= ((/* implicit */long long int) var_4);
            }
            for (short i_14 = 0; i_14 < 20; i_14 += 3) 
            {
                arr_42 [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_14 [i_7] [i_14])) : (((/* implicit */int) var_5)))))) ? (min((min((9223372036854775785LL), (((/* implicit */long long int) var_19)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))))) : ((+(-8119965284776645233LL))));
                var_42 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)3))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_12))))))))));
                var_43 = ((/* implicit */short) ((((/* implicit */_Bool) 17987658474497957055ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-19))) : (5156744891337194424LL)));
            }
            var_44 = ((/* implicit */_Bool) 11009018029455202557ULL);
            var_45 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((arr_6 [i_7 + 2] [i_7 + 1] [i_7 + 1] [i_7 + 3]), (((/* implicit */long long int) var_5))))), (((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (min((((/* implicit */unsigned long long int) var_11)), (11467256654484405884ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_7)))))))));
        }
    }
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 25; i_15 += 4) 
    {
        var_46 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -5595701427562519129LL)) ? (7437726044254349058ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))))));
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 25; i_16 += 3) 
        {
            for (unsigned short i_17 = 3; i_17 < 21; i_17 += 2) 
            {
                {
                    var_47 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (var_18)))) ^ (((/* implicit */int) var_0))));
                    arr_50 [i_15] [i_16] [i_17] = ((/* implicit */_Bool) arr_45 [i_15] [i_16]);
                    arr_51 [i_15] [i_17] [i_17] [i_17] = var_0;
                    var_48 &= ((/* implicit */short) ((((/* implicit */int) (unsigned char)93)) ^ (((/* implicit */int) (unsigned char)189))));
                }
            } 
        } 
        var_49 = ((/* implicit */long long int) var_3);
    }
    var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_8)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-112)))))) : (((/* implicit */int) var_3))));
    var_51 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_19))))) || (((/* implicit */_Bool) ((unsigned long long int) var_19))))) ? (min((((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (unsigned char)247)))), (((/* implicit */int) (unsigned char)151)))) : (((((/* implicit */_Bool) min((-8305263057226224037LL), (((/* implicit */long long int) var_0))))) ? (((/* implicit */int) min((((/* implicit */short) var_9)), (var_11)))) : (((/* implicit */int) var_17))))));
    var_52 = ((/* implicit */short) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_13))))), (max((((/* implicit */long long int) var_5)), (5156744891337194424LL))))), (((/* implicit */long long int) (-(((/* implicit */int) var_17)))))));
}
